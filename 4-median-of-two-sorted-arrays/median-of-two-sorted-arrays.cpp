// EXTREME BRUTE FORCE (JUST FOR PRACTICE)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        double ans=0;
        
        for(int n:nums1){
            merge.push_back(n);
        }
        for(int n:nums2){
            merge.push_back(n);
        }
        sort(merge.begin(), merge.end());
        int s = merge.size();

        if(s%2==1){
            ans = merge[s/2];
        }
        else {
            ans = (merge[s/2-1] + merge[s/2]) / 2.0;
        }
        return ans;
    }
};