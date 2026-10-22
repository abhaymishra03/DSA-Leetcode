class Solution {
public:
    bool detectCapitalUse(string word) {

        int countCap = 0;
        int countSmall = 0;

        for (char ch : word) {

            if (islower(ch))
                countSmall++;
            else
                countCap++;
        }


        return countCap == word.size() || countSmall == word.size() ||
               (countCap == 1 && isupper(word[0]));
    }
};