class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxfreq=0, ans=0;;
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        for(auto &x:freq){
            maxfreq=max(maxfreq,x.second);
        }
        for(auto &x:freq){
            if(x.second==maxfreq){
                ans+=x.second;
            }
        }
        return ans;
    }
};