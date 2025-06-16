class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>n(pref.size());
        n[0]=pref[0];
        for(int i=1;i<pref.size();i++){
            n[i]=pref[i]^pref[i-1];
        }
        return n;
    }
};
