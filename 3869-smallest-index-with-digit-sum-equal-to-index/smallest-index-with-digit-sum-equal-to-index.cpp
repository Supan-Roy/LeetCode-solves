class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int sr = nums[i], sum = 0;
            while(sr>0){
                sum+=sr%10;
                sr/=10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
};