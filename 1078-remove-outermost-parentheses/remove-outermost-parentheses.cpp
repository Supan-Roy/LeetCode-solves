class Solution {
public:
    string removeOuterParentheses(string s) {
        string final = "";
        int count = 0;

        for(char ch:s){
            if(ch == '('){
                if(count>0){
                    final+=ch;
                }
                count++;
            }
            else {
                count--;
                if(count>0){
                    final+=ch;
                }
            }
        }
        return final;
    }
};