class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> count(k, 0);
        count[0] = 1;

        int sum = 0, ans = 0;
        for (int x : nums) {
            sum += x;
            int rem = (sum % k + k) % k;
            ans += count[rem];
            count[rem]++;
        }
        return ans;
    }
};