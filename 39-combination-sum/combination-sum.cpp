class Solution {
public:
    set<vector<int>>s;

    void getAllCombs(vector<int>&arr, int idx, int target, vector<vector<int>>&ans, vector<int>&combins){
        if(idx == arr.size() || target < 0){
            return;
        }
        if(target==0){
            if(s.find(combins)==s.end()){
                ans.push_back(combins);
                s.insert(combins);
            }
            return;
        }
        combins.push_back(arr[idx]);
        //single choice
        getAllCombs(arr, idx+1, target-arr[idx], ans, combins);
        //multiple choice
        getAllCombs(arr, idx, target-arr[idx], ans, combins);
        combins.pop_back();
        //exclusion choice
        getAllCombs(arr, idx+1, target, ans, combins);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>combins;
        getAllCombs(arr, 0, target, ans, combins);
        return ans;
    }
};