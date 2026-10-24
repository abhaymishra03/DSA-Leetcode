class Solution {
public:

    bool isVowel(char ch) {

        int num = ch -'a';


        if(num == 0 || num == 4 || num == 8 || num == 14 || num == 20 )
        return true;


        return false;
    }
    int maxVowels(string s, int k) {


        int currVow = 0;


        for(int i = 0 ; i < k; i++) {

            if(isVowel(s[i]))
            currVow++;

        }

        int maxVow = currVow;



        for(int i = k ; i < s.size(); i++) {

            if(isVowel(s[i-k]))
            currVow--;
            if(isVowel(s[i]))
            currVow++;



            maxVow = max(maxVow , currVow);

            
        }
        return maxVow;
    }
};