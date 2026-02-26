class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int check = 0;
        int count = 0;

        for (int x:nums) {
            if (count == 0) {
                check = x;
            }
            if (x == check) {
                count++;
            } else count--;
        }
        return check;
    }
};