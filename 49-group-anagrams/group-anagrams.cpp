class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>map;
        for(string str:strs){
            string s=str;
            sort(s.begin(), s.end());
            map[s].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto s:map){
            ans.push_back(s.second);
        }
        return ans;
    }
};