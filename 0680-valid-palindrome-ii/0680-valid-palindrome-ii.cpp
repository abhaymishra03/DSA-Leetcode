class Solution {
public:
    bool isPal(int st, int end, string& s) {

        while (st < end) {

            if (s[st] != s[end])
                return false;

                st++;
                end--;
        }
        return true;
    }

    bool validPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            if (s[left] != s[right])
                return isPal(left, right - 1, s) || isPal(left + 1, right, s);

            left++;
            right--;
        }
        return true;
    }
};