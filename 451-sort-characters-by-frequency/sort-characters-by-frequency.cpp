class Solution {
private:
    static bool compare(pair<char, int>& p1, pair<char, int>& p2){
        return p1.second > p2.second;
    }

public:
    string frequencySort(string s) {
        unordered_map<char, int>freqMap;
        for(char ch:s){
            freqMap[ch]++;
        }
        vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());
        sort(freqVec.begin(), freqVec.end(), compare);

        string ans = "";
        for(auto& p:freqVec){
            ans.append(p.second, p.first);
        }
        return ans;
    }
};