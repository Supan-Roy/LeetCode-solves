class Solution {
public:
    void findCombination(int idx, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& combination){
        if(target==0){
            ans.push_back(combination);
            return;
        }
        for(int i=idx; i<arr.size(); i++){
            if(i>idx && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            combination.push_back(arr[i]);
            findCombination(i+1, target-arr[i], arr, ans, combination);
            combination.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int>combination;
        vector<vector<int>>ans;
        findCombination(0, target, candidates, ans, combination);
        return ans;
    }
};