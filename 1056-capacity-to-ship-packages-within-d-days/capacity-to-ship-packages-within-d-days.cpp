class Solution {
public:
    int find_max(vector<int>& weights){
        int maxx = INT_MIN;
        for(int i=0;i<weights.size();i++){
            maxx = max(maxx, weights[i]);
        }
        return maxx;
    }

    int cal_days(vector<int>& weights, int capacity){
        int days=1;
        int curr_load=0;
        for(int w:weights){
            if(curr_load+w>capacity){
                days++;
                curr_load=w;
            }
            else curr_load+=w;
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int s:weights){
            sum+=s;
        }

        int low=find_max(weights), high=sum;
        while(low<=high){
            int mid = low+(high-low)/2;
            int total_days = cal_days(weights, mid);

            if(total_days<=days){
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};