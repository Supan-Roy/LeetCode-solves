class Solution {
public:
    double myPow(double x, int n) {
        long long z=n;
        double ans=1.0;
        if(z<0){
            x=1/x;
            z=-z;
        }
        while(z>0){
            if(z%2==1){
                ans*=x;
            }
            x*=x;
            z/=2;
        }
        return ans;
    }
};