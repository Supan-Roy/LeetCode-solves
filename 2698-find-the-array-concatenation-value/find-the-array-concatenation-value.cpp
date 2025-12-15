class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int l=0, r=nums.size()-1;
        long long ans=0;

        while(l<=r){
            if(l==r){
                ans+=nums[l];
            } else {
                string s=to_string(nums[l])+to_string(nums[r]);
                ans+=stoll(s);
            }
            l++;
            r--;
        }
        return ans;
    }
};