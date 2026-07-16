class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);

        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string reverseVowels(string s) {

        int st = 0, end = s.size() - 1;

        while (st < end) {

            if (!isVowel(s[st])) {
                st++;
            } else if (!isVowel(s[end])) {
                end--;
            } else {

                swap(s[st++], s[end--]);
            }
        }

        return s;
    }
};