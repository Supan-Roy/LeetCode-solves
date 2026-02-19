class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>ans;

        for(string e:emails){
            string res="";
            int i=0;

            while(e[i]!='@'){
                if(e[i]=='+'){
                    while(e[i]!='@') i++;
                    break;
                }
                if(e[i]!='.'){
                    res+=e[i];
                }
                i++;
            }
            while(i<e.size()){
                res+=e[i];
                i++;
            }
            ans.insert(res);
        }
        return ans.size();
    }
};