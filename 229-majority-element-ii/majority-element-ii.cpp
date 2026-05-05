class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0, cnt2=0;
        int cnd1, cnd2;
        vector<int> ans;
        int n=nums.size();

        for(int x:nums){
            if(x==cnd1) cnt1++;
            else if(x==cnd2) cnt2++;
            else if(cnt1==0){
                cnd1=x;
                cnt1=1;
            }
            else if(cnt2==0){
                cnd2=x;
                cnt2=1;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1=cnt2=0;
        for(int x:nums){
            if(x==cnd1) cnt1++;
            else if(x==cnd2) cnt2++;
        }
        if(cnt1>n/3){
            ans.push_back(cnd1);
        }
        if(cnt2>n/3){
            ans.push_back(cnd2);
        }
        return ans;
    }
};