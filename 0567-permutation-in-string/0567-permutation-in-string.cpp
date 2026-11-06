class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int k = s1.size();


        if(k > s2.size())return false;

        vector<int> f1(26, 0);
        vector<int> f2(26, 0);

        for (char ch : s1)
            f1[ch - 'a']++;

        // first window

        for (int i = 0; i < k; i++) {

            f2[s2[i] - 'a']++;
        }

            if (f1 == f2)
                return true;
        for (int i = k; i < s2.size(); i++) {

            f2[s2[i] - 'a']++;
            f2[s2[i - k] - 'a']--;

            if (f1 == f2)
                return true;
        }

        return false;
    }
};