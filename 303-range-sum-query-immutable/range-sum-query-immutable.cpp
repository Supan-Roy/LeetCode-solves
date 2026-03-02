class NumArray {
public:
    vector<int>prefs;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        prefs.resize(n+1);
        prefs[0]=0;
        for(int i=0;i<n;i++){
            prefs[i+1]=prefs[i]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefs[right+1]-prefs[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */