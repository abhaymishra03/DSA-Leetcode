class Solution {
public:
    bool checkString(string s) {
        

        bool a =false;
        bool b =false;


        for(char ch: s) {

            if(ch == 'a')
            a=true;
            if(ch == 'b')
            b=true;

            if(ch=='a' && b)
            return false;
        }

        return true;
    }
};