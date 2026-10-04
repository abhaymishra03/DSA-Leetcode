class Solution {
public:
    vector<string> splitWords(string title) {
        vector<string> word;

        string str = "";
        for (char ch : title) {

            if (ch == ' ') {
                word.push_back(str);
                str = "";
            } else {
                str += ch;
            }
        }

        word.push_back(str);

        return word;
    }
    string convertToLower(string s) {

        for (int i = 0; i < s.size(); i++) {

            // Convert uppercase letter to lowercase
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }

        return s;
    }
    string capitalise(string s) {

        if (s.empty())
            return s;

        // Convert first character to uppercase
        if (s[0] >= 'a' && s[0] <= 'z')
            s[0] = s[0] - 32;

        // Convert remaining characters to lowercase
        for (int i = 1; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
        }

        return s;
    }

    string helper(vector<string> word) {

        for (int i = 0; i < word.size(); i++) {

            string str = word[i];

            if (str.size() <= 2) {

                word[i] = convertToLower(word[i]);

            } else {
                word[i] = capitalise(word[i]);
            }
        }

        string str = "";

        for (string s : word)
            str += s + ' ';


            str.pop_back();

        

        return str;
    }
    string capitalizeTitle(string title) {

        vector<string> word = splitWords(title);

        return helper(word);
    }
};