class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        unordered_set<int>s;
        int n=grid.size();
        int repeated, missing;
        int ExpectedSum=0, ActualSum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ActualSum+=grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    repeated = grid[i][j];
                    ans.push_back(repeated);
                }
                s.insert(grid[i][j]);
            }
        }
        ExpectedSum = (n*n)*(n*n+1)/2;
        missing = ExpectedSum+repeated-ActualSum;
        ans.push_back(missing);
        return ans;
    }
};