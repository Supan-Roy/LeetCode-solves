class Solution {
public:
    int find_max(vector<int>& nums){
        int maxx = INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxx = max(maxx, nums[i]);
        }
        return maxx;
    }
    int calc_ck(vector<int>& nums, int ck){
        int ck_point = 0;
        for(int i=0;i<nums.size();i++){
            ck_point += (nums[i]+ck-1)/ck;
        }
        return ck_point;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1, high=find_max(nums);
        while(low<=high){
            int mid=(low+high)/2;
            int ck_point=calc_ck(nums, mid);

            if(ck_point<=threshold){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return low;
    }
};