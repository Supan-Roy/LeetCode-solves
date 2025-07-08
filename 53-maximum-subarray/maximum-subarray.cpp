class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=0, maxSum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            currentSum+=nums[i];
            maxSum=max(currentSum, maxSum);
            if(currentSum<0){
                currentSum=0;
            }
        }
        return maxSum;
    }
};