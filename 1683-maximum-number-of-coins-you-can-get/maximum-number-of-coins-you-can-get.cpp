class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());

        int n=piles.size()/3;
        int l=0, r=piles.size()-1;
        int ans=0;

        while(n--){
            r--;
            ans+=piles[r];
            r--, l++;
        }
        return ans;
    }
};