class Solution {
public:
    int balancedStringSplit(string s) {
        int result=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L'){
                count++;
            }
            else if(s[i]=='R'){
                count--;
            }
            if(count==0) result++;
        }
        return result;
    }
};
