class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int, int>freq;
        for(int x:nums){
            count+=freq[x-k]+freq[x+k];
            freq[x]++;
        }
        return count;
    }
};   // O(n)