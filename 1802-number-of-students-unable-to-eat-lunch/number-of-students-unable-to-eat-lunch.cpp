class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int zero=0, one=0;
        for(int st:students){
            if(st==0) zero++;
            else one++;
        }

        for(int san:sandwiches){
            if(san==0){
                if(zero==0){
                    return one;
                } zero--;
            } else if(san==1) {
                if(one==0){
                    return zero;
                } one--;
            }
        }
        return 0;
    }
};