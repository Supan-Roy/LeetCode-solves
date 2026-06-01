class Solution {
public:
    string largestOddNumber(string num) {
        int idx = -1;

        for(int i=num.size(); i>=0; i--){
            if((num[i]-'0') %2 == 1){
                idx= i;
                break;
            }
        }
        int i=0;
        while(i<=idx && num[i]=='0'){
            i++;
        }
        return num.substr(i, idx-i+1);
    }
};