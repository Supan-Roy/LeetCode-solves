class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int num = i, flag = true;
            while(num>0){
                int last = num%10;
                if(last==0 || i%last!=0){
                    flag = false;
                    break;
                }
                num/=10;
            }
            if(flag){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
