class Solution {
public:
    bool isValid(string word) {

        if(word.size()<3) return false;

        vector<bool> res(2,false);   //[ vowel , consonant]

        for(char ch : word) {

            if(ispunct(ch)) return false;


            if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||
            ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')
            res[0]=true;
            else if (isalpha(ch))
            res[1]=true;
            


        }


return res[0] & res[1];
        
        
    }
};