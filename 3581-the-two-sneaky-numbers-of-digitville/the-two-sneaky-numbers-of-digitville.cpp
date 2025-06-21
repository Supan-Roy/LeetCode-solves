class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[ans]=nums[i];
                ans++;
            }
        }
        return {nums[0], nums[1]};
    }
};