class Solution {
public:
    int maxDifference(string s) {
        int n = s.size();
        vector<int>freq(26,0);

        for(char &c : s){
            freq[c-'a']++;
        }
        int maxOdd=INT_MIN;
        int minEven=INT_MAX;

        for(int i=0;i<26;i++){
            if(freq[i]==0) continue;
            
            else if(freq[i]%2==0){
                minEven=min(minEven, freq[i]);
            }
            else maxOdd=max(maxOdd, freq[i]);
        }
        return maxOdd-minEven;
    }
};