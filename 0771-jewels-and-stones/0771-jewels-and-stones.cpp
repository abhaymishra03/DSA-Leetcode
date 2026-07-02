class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_map<char,bool>mp;

        for(char ch : jewels) {

            mp[ch] = true;

        }

        int cnt = 0;

        for(char ch : stones ) {

            if(mp[ch])cnt++;
        }

        return cnt;
        
    }
};