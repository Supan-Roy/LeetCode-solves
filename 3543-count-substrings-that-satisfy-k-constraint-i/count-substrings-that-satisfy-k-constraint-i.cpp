class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int ans=0;

        for(int i=0;i<s.size();i++){
            int zero=0, one=0;
            for(int j=i;j<s.size();j++){
                if(s[j]=='1'){
                    one++;
                } else zero++;
                if(zero<=k || one<=k){
                    ans++;
                }
            }
        }
        return ans;
    }
};