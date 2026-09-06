class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1;
        unordered_set<char> mapped;

        for (int i = 0; i < s.size(); i++) {

            // If s[i] is not mapped yet
            if (!mp1.count(s[i])) {

                // t[i] is already mapped to another character
                if (mapped.count(t[i]))
                    return false;

                // Create the mapping
                mp1[s[i]] = t[i];

                // Mark t[i] as already mapped
                mapped.insert(t[i]);

            } 
            else {

                // s[i] must map to the same character as before
                if (mp1[s[i]] != t[i])
                    return false;
            }
        }

        return true;
    }
};