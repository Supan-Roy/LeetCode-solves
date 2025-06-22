class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<=nums.size()-3;i++){
            if(nums[i]==0){
                for(int j=i;j<i+3;j++){
                    nums[j]=1-nums[j];
                }
                sum++;
            }
        }
        for(int k=0;k<nums.size();k++){
            if(nums[k]==0)
            return -1;
        }
        return sum;
    }
};