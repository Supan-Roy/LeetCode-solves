class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>sum(n+1);
        sum[0]=0;
        for(int i=1;i<=n;i++){
            sum[i]=sum[i/2]+(i%2);
        }
        return sum;
    }
};