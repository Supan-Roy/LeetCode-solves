class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int>a(n);
        int Max=-1;
        for(int i=n-1;i>=0;i--){
            a[i]=Max;
            Max=max(Max,arr[i]);
        }
        return a;
    }
};