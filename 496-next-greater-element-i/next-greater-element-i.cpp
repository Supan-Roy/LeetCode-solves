class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map;
        stack<int>stk;
        vector<int>ans;

        for(int x:nums2){
            while(!stk.empty() && x>stk.top()){
                map[stk.top()]=x;
                stk.pop();
            }
            stk.push(x);
        }
        while(!stk.empty()){
            map[stk.top()]=-1;
            stk.pop();
        }
        for(int x:nums1){
            ans.push_back(map[x]);
        }
        return ans;
    }
};