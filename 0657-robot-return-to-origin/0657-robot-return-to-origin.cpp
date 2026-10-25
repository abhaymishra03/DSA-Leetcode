class Solution {
public:
    bool judgeCircle(string moves) {



        int vert =0 , hori = 0;


        for(char ch : moves) {
            if(ch == 'U')
            vert++;
            if(ch == 'D')
            vert--;
            if(ch == 'R')
            hori++;
            if(ch == 'L')
            hori--;
        }
        
        return !vert && !hori ?true:false;
    }
};