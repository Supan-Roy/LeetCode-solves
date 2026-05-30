class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int idx = s.size()-1;
        
        while(idx>=0){
            while(idx>=0 && s[idx] == ' '){
                idx--;
            }

            if(idx<0) break;

            int end = idx;
            while(idx>=0 && s[idx]!=' '){
                idx--;
            }

            string word = s.substr(idx+1, end-idx);
            if(!ans.empty()){
                ans += ' ';
            }
            ans += word;
        }
        return ans;
    }
};