class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<double>ans;
        for(int i=0;i<nums.size()/2;i++){
            double avg=(nums[i]+nums[nums.size()-i-1])/2.0;
            ans.push_back(avg);
        }
        sort(ans.begin(), ans.end());
        return ans[0];
    }
};