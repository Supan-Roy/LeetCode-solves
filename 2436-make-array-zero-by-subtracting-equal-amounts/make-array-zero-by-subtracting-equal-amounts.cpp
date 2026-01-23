class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        while (1) {
            int m = INT_MAX;
            for (int x : nums) {
                if (x != 0) {
                    m = min(m, x);
                }
            }
            if(m==INT_MAX) break;
            for (int &x : nums) {
                if (x != 0) {
                    x -= m;
                }
            }
            ans++;
        }
        return ans;
    }
};