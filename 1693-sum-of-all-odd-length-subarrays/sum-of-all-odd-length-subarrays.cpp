class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++){
            int total=(i+1)*(arr.size()-i);
            int odd=(total+1)/2;
            ans+=arr[i]*odd;
        }
        return ans;
    }
};