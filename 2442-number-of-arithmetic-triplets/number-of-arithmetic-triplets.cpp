class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<nums.size();j++){
                for(int k=2;k<nums.size();k++){
                    if(nums[k]-nums[j] == diff && nums[j]-nums[i] == diff){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};