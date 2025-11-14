class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        istringstream ss(text);
        string word;
        while(ss>>word){
            int possible = 1;
            for(char c: brokenLetters){
                if(word.find(c)!=-1){
                    possible = 0;
                    break;
                }
            }
            if(possible){
                count++;
            }
        }
        return count;
    }
};