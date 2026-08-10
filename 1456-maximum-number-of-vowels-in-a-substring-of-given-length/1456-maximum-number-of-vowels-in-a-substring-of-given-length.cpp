class Solution {
public:
    int maxVowels(string s, int k) {

        // first window

        int vowels = 0;

        for (int i = 0; i < k; i++) {

            char ch = s[i];
           if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            }
        }

        int maxVowels = vowels;
        for (int i = k; i < s.size(); i++) {

            // add new element
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            }

            // remove last one

            char chr = s[i - k];

            if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u') {
                vowels--;
            }

            maxVowels = max(maxVowels, vowels);
        }

        return maxVowels;
    }
};