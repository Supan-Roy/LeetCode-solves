class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int w1=0, w2=0;
        int n=word1.size()+word2.size();
        for(int k=0;k<n;k++){
            if(w1<word1.size()){
                ans+=word1[w1];
                w1++;
            }
            if(w2<word2.size()){
                ans+=word2[w2];
                w2++;
            }
        }
        return ans;
    }
};