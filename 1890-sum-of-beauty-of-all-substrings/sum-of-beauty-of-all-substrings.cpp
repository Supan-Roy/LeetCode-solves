class Solution {
public:
    int beautySum(string s) {
        int sum = 0;

        for(int i=0;i<s.size();i++){
            unordered_map<char, int> freq;

            for(int j=i;j<s.size();j++){
                freq[s[j]]++;

                int maxi = INT_MIN;
                int mini = INT_MAX;
                for(auto c:freq){
                    mini = min(mini, c.second);
                    maxi = max(maxi, c.second);
                }
                sum += (maxi-mini);
            }
        }
        return sum;
    }
};