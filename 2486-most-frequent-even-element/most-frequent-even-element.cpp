class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> count;
        for(int x:nums){
            if(x%2==0){
                count[x]++;
            }
        }
        int res=-1;
        int max_count=0;

        for(auto & [num, freq]:count){
            if(freq>max_count){
                max_count=freq;
                res=num;
            }
            else if (freq==max_count){
                if(num<res){
                    res=num;
                }
            }
        }
        return res;
    }
};