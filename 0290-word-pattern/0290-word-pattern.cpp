class Solution {
public:
    bool wordPattern(string pattern, string s) {

        // first separate the word from s

        vector<string> word;
        string str = "";

        for (char ch : s) {

            if (ch != ' ') {

                str += ch;

            } else {
                word.push_back(str);
                str = "";
            }
        }

        word.push_back(str);

      

        if (word.size() != pattern.size())
            return false;

        // pattern -> s
        unordered_map<char, string> mp;
        unordered_set<string> mapped;

        for (int i = 0; i < pattern.size(); i++) {

            if (!mp.count(pattern[i])) {

                if (mapped.count(word[i]))
                    return false;

                mp[pattern[i]] = word[i];

                mapped.insert(word[i]);
            }

            else {

                if (mp[pattern[i]] != word[i])
                    return false;
            }
        }

        return true;
    }
};