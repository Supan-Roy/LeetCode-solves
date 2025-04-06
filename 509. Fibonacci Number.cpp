class Solution {
public:
    int fib(int n) {
        if(n==0)
        return 0;
        if(n==1)
        return 1;

        int temp1=1, temp2=0;
        for(int i=2;i<=n;i++){
            int current=temp1+temp2;
            temp2=temp1;
            temp1=current;
        }
        return temp1;
    }
};
