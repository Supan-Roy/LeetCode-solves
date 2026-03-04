class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1;
        int dec=1;
        int maxlen=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                inc++;
                dec=1;
            }
            else if(nums[i]>nums[i+1]){
                dec++;
                inc=1;
            }
            else {
                inc=dec=1;
            }
            maxlen=max(maxlen, max(inc, dec));
        }
        return maxlen;
    }
};