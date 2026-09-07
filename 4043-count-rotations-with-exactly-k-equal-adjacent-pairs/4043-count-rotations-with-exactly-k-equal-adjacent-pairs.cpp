class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();

        // n = 1: only one rotation, and there are no adjacent pairs.
        if (n == 1)
            return k == 0;

        int E = 0;

        // Number of equal adjacent pairs in the original string.
        for (int i = 0; i + 1 < n; ++i) {
            E += (s[i] == s[i + 1]);
        }

        int ans = 0;

        // Rotation by 0 positions.
        if (E == k)
            ++ans;

        bool boundaryEqual = (s[n - 1] == s[0]);

        // Rotations p = 1 ... n-1.
        for (int p = 1; p < n; ++p) {
            int removedEqual = (s[p - 1] == s[p]);

            int score = E - removedEqual + boundaryEqual;

            if (score == k)
                ++ans;
        }

        return ans;
    }
};