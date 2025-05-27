class Solution {
public:
    int countAsterisks(string s) {
        int result=0;
        int a=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='|'){
                if(a==0){
                    a=1;
                }else{
                    a=0;
                }
            }else if(s[i]=='*' && a==0){
                result++;
            }
        }
        return result;
    }
};
