class Solution {
public:
    int countGoodSubstrings(string s) {

        unordered_map<char, int> mp;

        int count = 0;

        for (int i = 0; i < 3; i++) {

            mp[s[i]]++;
        }

        mp.size() == 3 ? count++ : count;

        for (int i = 3; i < s.size(); i++) {

            mp[s[i - 3]]--;

            if (mp[s[i - 3]] == 0)
                mp.erase(s[i - 3]);

            mp[s[i]]++;
            mp.size() == 3 ? count++ : count;
        }

        return count;
    }
};