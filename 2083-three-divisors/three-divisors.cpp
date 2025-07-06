class Solution {
public:
    bool isThree(int n) {
        int sum=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                sum++;
            }
        }
        if(sum==3) return true;
        else return false;
    }
};