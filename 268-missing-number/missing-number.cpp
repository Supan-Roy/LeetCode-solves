class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int actualSum=0;
        int expectedSum = (n*(n+1))/2;

        for(int i=0;i<n;i++){
            actualSum+=nums[i];
        }
        int ans=expectedSum-actualSum;
        return ans;
    }
};