class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        int r=0, c=m-1;

        while(r<n && c>=0){
            if(grid[r][c]<0){
                count+=n-r;
                c--;
            } else r++;
        }
        return count;
    }
};