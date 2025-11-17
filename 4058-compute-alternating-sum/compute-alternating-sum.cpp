class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int ans;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans+=nums[i];
            } else {
                ans-=nums[i];
            }
        }
        return ans;
    }
};