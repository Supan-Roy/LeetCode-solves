class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int count1=0, count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                count1+=nums[i];
            }else{
                count2+=nums[i];
            }
        }
        if(count1==count2){
            return false;
        }else{
            return true;
        }
    }
};
