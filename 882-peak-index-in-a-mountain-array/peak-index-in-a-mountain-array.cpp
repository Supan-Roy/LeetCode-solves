class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=1, end = arr.size()-2;

        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }else if(arr[mid-1]<arr[mid]){
                start=mid+1;
            }else{
                end = mid-1;
            }
        }
        return -1;
    }
};