class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int>s(nums.begin(), nums.end());
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i]+diff) && s.count(nums[i]+2*diff)){
                count++;
            }
        }
        return count;
    }
};