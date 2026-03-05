class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        map[0]=1;

        int sum=0, ans=0;
        for(int x:nums){
            sum+=x;

            if(map.find(sum-k)!=map.end()){
                ans+=map[sum-k];
            }
            map[sum]++;
        }
        return ans;
    }
};