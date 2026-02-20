class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sideA;
        unordered_map<char, char> sideB;

        for(int i=0;i<s.size();i++){
            char a=s[i];
            char b=t[i];

            if(sideA.count(a) && sideA[a]!=b){
                return false;
            }
            if(sideB.count(b) && sideB[b]!=a){
                return false;
            }
            sideA[a]=b;
            sideB[b]=a;
        }
        return true;
    }
};