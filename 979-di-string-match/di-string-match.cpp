class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        int low = 0, high = n;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'I') {
                ans.push_back(low);
                low++;
            } else {
                ans.push_back(high);
                high--;
            }
        }
        ans.push_back(high);
        return ans;
    }
};