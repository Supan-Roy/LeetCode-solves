class Solution {
public:
    int commonFactors(int a, int b) {
        int s = gcd(a, b);
        int ans=0;
        for(int x=1;x<=s;x++)
        {
            ans+=s%x==0;
        }
        return ans;
    }
};
