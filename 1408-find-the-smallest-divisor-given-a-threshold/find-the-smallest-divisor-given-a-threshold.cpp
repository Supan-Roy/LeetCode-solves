class Solution {
public:
    int find_max(vector<int>& nums){
        int maxx = INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxx = max(maxx, nums[i]);
        }
        return maxx;
    }
    int sum(vector<int>& nums, int div){
        int total = 0;
        for(int i=0;i<nums.size();i++){
            total += (nums[i]+div-1)/div;
        }
        return total;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1, high=find_max(nums);
        while(low<=high){
            int mid=low+(high-low)/2;
            int total=sum(nums, mid);

            if(total<=threshold){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return low;
    }
};