class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> required;
        vector<int> ans;

        for (string word : words) {
            required[word]++;
        }

        int sz = words[0].size();

        for (int offset = 0; offset < sz; offset++) {

            unordered_map<string, int> current;

            int left = offset;
            int right = offset;
            int count = 0;

            while (right + sz <= s.size()) {

                string word = s.substr(right, sz);
                right += sz;

                if (!required.count(word)) {
                    current.clear();
                    count = 0;
                    left = right;
                    continue;
                }

                current[word]++;
                count++;

                while (current[word] > required[word]) {

                    string leftWord = s.substr(left, sz);
                    current[leftWord]--;
                    left += sz;
                    count--;
                }

                if (count == words.size()) {
                    ans.push_back(left);
                }
            }
        }

        return ans;
    }
};