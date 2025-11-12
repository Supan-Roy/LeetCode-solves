class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>a(26);
        int count=0;
        for(int i=0;i<s.size();i++){
            if(a[s[i]-97]==0){
                a[s[i]-97]=1;
                count++;
            }
        }
        if(count==26){
            return true;
        }
       return false;
    }
};