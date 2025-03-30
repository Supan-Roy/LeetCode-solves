class Solution {
    public int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int temp=x;
        while(temp>0){
            sum+=temp%10;
            temp=temp/10;
        }
        return (x%sum==0) ? sum:-1;
    }
}
