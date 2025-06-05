class Solution {
public:
    int minElement(vector<int>& nums) {
        int x = 100;
        for(int i=0;i<nums.size();i++){
            int d=0;
            int temp=nums[i];

            while(temp>0){
                d+=temp%10;
                temp/=10;
            }
           x=min(x, d);
        }
        return x;
    }
};
