// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         char res = 0;
//         for(char c:s){
//             res^=c;
//         }
//         for(char c:t){
//             res^=c;
//         }
//         return res;
//     }
// };

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]){
                return t[i];
            }
        }
        return t.back();
    }
};