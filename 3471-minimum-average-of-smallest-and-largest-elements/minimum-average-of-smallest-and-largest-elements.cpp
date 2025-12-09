class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        double ans = DBL_MAX;
        for(int i=0;i<nums.size()/2;i++){
            double avg=(nums[i]+nums[nums.size()-i-1])/2.0;
            ans=min(ans, avg);
        }
        return ans;
    }
};