class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        if (s1.size() != s2.size())
            return false;
        if (s1 == s2)
            return true;

        int mis = 0;

        int i = 0;

        vector<int> idx;

        while (i < s1.size()) {

            if (s1[i] != s2[i]) {
                mis++;
                idx.push_back(i);
            }
            i++;
        }

        if (mis != 2)
            return false;
        swap(s2[idx[0]], s2[idx[1]]);

        return s1 == s2;
    }
};