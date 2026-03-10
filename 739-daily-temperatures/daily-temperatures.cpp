class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        int n=temps.size();
        vector<int>ans(n, 0);
        stack<int>stk;

        for(int i=0;i<n;i++){
            while(!stk.empty() && temps[i]>temps[stk.top()]){
                int index=stk.top();
                stk.pop();
                ans[index]=i-index;
            }
            stk.push(i);
        }
        return ans;
    }
};