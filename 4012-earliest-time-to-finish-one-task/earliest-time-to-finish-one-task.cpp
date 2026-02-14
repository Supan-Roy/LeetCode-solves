class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini=INT_MAX;
        for(auto& x:tasks){
            mini=min(mini, x[0]+x[1]);
        }
        return mini;
    }
};