class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>freq(26,0);

        for(char ch : s)
        freq[ch-'a']++;
        string left ="";
        string right ="";
        string mid ="";
        for(int i = 0; i <26; i++){

            left+=string(freq[i]/2,i+'a');

            if(freq[i]%2)mid = char(i+'a');

        }

        right = left;
        reverse(right.begin(),right.end());

        return left + mid + right;
    }
};