class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less=0;
        int equal=0;
        vector<int>ans;
        
        for(int num:nums){
            if(num<target){
                less++;
            } else if(num==target){
                equal++;
            }
        }
        for(int i=0;i<equal;i++){
            ans.push_back(less+i);
        }
        return ans;
    }
};