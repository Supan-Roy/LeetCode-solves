class Solution {
public:
    int pivotInteger(int n) {
        int total = n*(n+1)/2;
        int ans = sqrt(total);
        if(ans*ans == total){
            return ans;
        }
        return -1;
    }
};