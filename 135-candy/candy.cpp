class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>candies(n,1);
        int count=0, ans=0;

        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                candies[i]=candies[i-1]+1;
            }
        }
        for(int i=n-1;i>0;i--){
            if(ratings[i-1]>ratings[i]){
                candies[i-1]=max(candies[i]+1, candies[i-1]);
            }
            count+=candies[i-1];
        }
        ans = count+candies[n-1];
        return ans;
    }
};