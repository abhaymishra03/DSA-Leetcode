class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int sz = min(word1.size(),word2.size());
        string ans="";


        for(int i = 0 ;i < sz ; i++ ) {

            ans+=word1[i];
            ans+=word2[i];


        }


        if(word1.size()<word2.size()) {

            for(int i = sz ; i < word2.size(); i++)
            ans+=word2[i];
        } else {

            for(int i = sz ; i < word1.size(); i++)
            ans+=word1[i];


        }

return ans;

        
    }
};