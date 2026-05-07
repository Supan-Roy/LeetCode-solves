class Solution {
public:
    int find_max(vector<int>& piles){
        int maxx = INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxx = max(maxx, piles[i]);
        }
        return maxx;
    }
    long long calc_hrs(vector<int>& piles, int hour){
        long long total_hrs=0;
        for(int i=0;i<piles.size();i++){
            total_hrs += (piles[i]+hour-1)/hour;
        }
        return total_hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high = find_max(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long total_hrs = calc_hrs(piles, mid);

            if(total_hrs<=h){
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return low;
    }
};