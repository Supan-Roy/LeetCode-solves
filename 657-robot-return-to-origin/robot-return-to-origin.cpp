class Solution {
public:
    bool judgeCircle(string moves) {
        int p1=0, p2=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                p1++;
            }else if(moves[i]=='D'){
                p1--;
            }else if(moves[i]=='L'){
                p2++;
            }else if(moves[i]=='R'){
                p2--;
            }
        }
        if(p1==0 && p2==0) return true;
        else return false;
    }
};