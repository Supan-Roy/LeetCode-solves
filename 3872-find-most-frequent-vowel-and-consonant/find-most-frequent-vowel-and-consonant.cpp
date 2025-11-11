class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26];
        int maxvowel = 0, maxconsonant = 0;
        for(char c:s){
            int i = c -'a';
            freq[i]++;
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                maxvowel = max(maxvowel, freq[i]);
            } else {
                maxconsonant = max(maxconsonant, freq[i]);
            }
        }
        return maxvowel+maxconsonant;
    }
};