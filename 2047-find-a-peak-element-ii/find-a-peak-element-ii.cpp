class Solution {
public:
    int maxElement(vector<vector<int>>& arr, int col){
        int n = arr.size();
        int max_val = INT_MIN;
        int idx = -1;

        for(int i=0;i<n;i++){
            if(arr[i][col] > max_val){
                max_val = arr[i][col];
                idx = i;
            }
        }
        return idx;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m-1;

        while(low<=high){
            int mid = low + (high-low)/2;
            int row = maxElement(mat, mid);

            int left = mid-1>=0 ? mat[row][mid-1] : -1;
            int right = mid+1<m ? mat[row][mid+1] : -1;

            if(mat[row][mid] > left && mat[row][mid] > right){
                return {row, mid};
            }
            else if(left > mat[row][mid]){
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return {-1, -1};
    }
};