class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg, ans;
        for(int x:nums){
            if(x>0){
                pos.push_back(x);
            } else {
                neg.push_back(x);
            }
        }
        int i=0, j=0;
        while(i<pos.size() && j<neg.size()){
            ans.push_back(pos[i++]);
            ans.push_back(neg[j++]);
        }
        return ans;
    }
};