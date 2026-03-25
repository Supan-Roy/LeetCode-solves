class Solution {
public:
    void getAllSubs(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubs){
        if(i==nums.size()){    // base case
            allSubs.push_back(ans);
            return;
        }
        // include
        ans.push_back(nums[i]);
        getAllSubs(nums, ans, i+1, allSubs);
        ans.pop_back();

        // exclude
        getAllSubs(nums, ans, i+1, allSubs);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubs;
        vector<int> ans;

        getAllSubs(nums, ans, 0, allSubs);
        return allSubs;
    }
};