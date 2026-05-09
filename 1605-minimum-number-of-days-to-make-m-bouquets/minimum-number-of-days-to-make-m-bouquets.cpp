class Solution {
public:
    bool possible(vector<int>& arr, int day, int m, int k){
        int count=0, bouq=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day){
                count++;
                if(count==k){
                    bouq++;
                    count=0;
                }
            }
            else count=0;
        }
        return bouq>=m;
    }

    int minDays(vector<int>& arr, int m, int k) {
        long long total = 1LL*m*k;
        if(total>arr.size()) return -1;

        int low = *min_element(arr.begin(), arr.end());
        int high = *max_element(arr.begin(), arr.end());
        int ans=-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(possible(arr, mid, m, k)){
                ans = mid;
                high = mid-1;
            } else {
                low = mid+1;
            }
        }
        return ans;
    }
};