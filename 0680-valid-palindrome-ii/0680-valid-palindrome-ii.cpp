class Solution {
public:
    bool palindrome(string& s, int left, int right) {

        while (left < right) {

            if (s[left] != s[right])
                return false;

            left++;
            right--;
        }

        return true;
    }
    bool validPalindrome(string s) {

        int st = 0, end = s.size() - 1;

        while (st < end) {

            if (s[st] != s[end]) {

                return palindrome(s, st+1, end) || palindrome(s, st, end-1);
            }

            st++;
            end--;
        }

        return true;
    }
};