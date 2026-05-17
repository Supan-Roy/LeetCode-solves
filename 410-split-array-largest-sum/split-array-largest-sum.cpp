class Solution {
public:
    int partitionsNeeded(vector<int>& nums, int maxSum){
        int partitions=1;
        int currSubarraySum=0;

        for(int n: nums){
            if(currSubarraySum+n <= maxSum){
                currSubarraySum += n;
            }
            else {
                partitions++;
                currSubarraySum = n;
            }
        }
        return partitions;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = nums[0];
        int high = 0;

        for(int n:nums){
            if(n>low){
                low = n;
            }
            high += n;
        }
        while(low <= high){
            int mid = low + (high-low)/2;
            if(partitionsNeeded(nums, mid) <= k){
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return low;
    }
};