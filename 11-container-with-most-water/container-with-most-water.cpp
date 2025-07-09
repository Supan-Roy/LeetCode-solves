class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int result=0;
        while(left<right){
            int w = right-left;
            int h = min(height[left], height[right]);
            int current = w*h;
            result = max(result, current);

            if(height[left]<=height[right]){
                left++;
            }else{
                right--;
            } 
        }
        return result;
    }
};