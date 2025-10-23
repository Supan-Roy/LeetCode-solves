class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<int>a(26, -1);
        int index=0;
        for(int i=0;i<key.size();i++){
            if(key[i]!=' ' && a[key[i]-'a'] == -1){
                a[key[i]-'a']=index++;
            }
        }
        for(int i=0;i<message.size();i++){
            if(message[i]!=' '){
                message[i]=a[message[i]-'a']+'a';
            }
        }
        return message;
    }
};