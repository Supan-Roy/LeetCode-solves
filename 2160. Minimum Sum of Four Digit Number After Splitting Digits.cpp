class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits;
        while(num>0){
            digits.push_back(num%10);
            num/=10;
        }
        sort(digits.begin(), digits.end());
        int new1= digits[0]*10+digits[2];
        int new2= digits[1]*10+digits[3];

        return new1+new2;
    }
};
