class Solution {
public:
    int numberOfSteps(int num) {
        int sol=0;
        while(num>0){
            if(num%2==0){
                num/=2;
                sol++;
            }
            else{
                num-=1;
                sol++;
            }
        }
        return sol;
    }
};
