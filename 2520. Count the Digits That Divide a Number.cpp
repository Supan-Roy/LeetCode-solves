class Solution {
public:
    int countDigits(int num) {
        int temp = num;
        int count = 0;
        while(temp>0){
            int d = temp%10;
            if(num%d==0){
                count++;
            }
            temp/=10;
        } 
        return count;
    }
};
