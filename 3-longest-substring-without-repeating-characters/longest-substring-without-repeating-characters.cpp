class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>last(256, -1);
        int left=0, count=0;
        for(int right=0;right<s.size();right++){
            if(last[s[right]]>=left){
                left=last[s[right]]+1;
            }
            last[s[right]]=right;
            count=max(count, right-left+1);
        }
        return count;
    }
};