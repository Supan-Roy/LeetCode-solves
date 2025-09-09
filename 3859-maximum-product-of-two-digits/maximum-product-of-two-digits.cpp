class Solution {
public:
    int maxProduct(int n) {
        vector<int> d;

        while(n>0){
            d.push_back(n%10);
            n/=10;
        }
        sort(d.begin(), d.end());
        return d[d.size()-1] * d[d.size()-2];
    }
};