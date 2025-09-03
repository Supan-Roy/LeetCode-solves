class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i=low;i<=high;i++){
            string s = to_string(i);
            int n=s.size();
            if(n%2!=0) continue;

            int half = n/2;
            int s1 = 0, s2 = 0;
            for(int j=0;j<half;j++){
                s1+=s[j]-'0';
            }
            for(int j=half;j<n;j++){
                s2+=s[j]-'0';
            }
            if(s1==s2){
                count++;
            }
        }
        return count;
    }
};