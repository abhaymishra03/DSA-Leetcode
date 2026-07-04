class Solution {
public:
        char shift(char ch , char dig) {
        return (char)((int)ch + (int)dig-48);}


    string replaceDigits(string s) {


        for(int i = 1 ; i < s.size(); i = i+2){


            s[i]=shift(s[i-1],s[i]);

        }
        
return s;
        
        
    }
};