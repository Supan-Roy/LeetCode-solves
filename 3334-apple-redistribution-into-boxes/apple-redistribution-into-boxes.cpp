class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total=0;
        for(int i:apple){
            total+=i;
        }

        sort(capacity.begin(), capacity.end(), greater<int>());
        int used_capacity=0;
        int used_box=0;

        for(int i=0;i<capacity.size();i++){
            used_capacity+=capacity[i];
            used_box++;
            if(used_capacity>=total){
                return used_box;
            }
        }
        return used_box;
    }
};