class Solution {
public:
    string minWindow(string s, string t) {

        if(t.size() > s.size()) return "";

        unordered_map<char,int> need;
        unordered_map<char,int> mp;

        for(char ch : t)
            need[ch]++;

        int required = need.size();
        int formed = 0;

        int left = 0;
        int minLen = INT_MAX;

        int start = 0;

        for(int right = 0; right < s.size(); right++) {

            char ch = s[right];

            mp[ch]++;

            if(need.count(ch) && mp[ch] == need[ch])
                formed++;

            while(formed == required) {

                if(right - left + 1 < minLen) {

                    minLen = right - left + 1;
                    start = left;
                }

                char c = s[left];

                mp[c]--;

                if(need.count(c) && mp[c] < need[c])
                    formed--;

                left++;
            }
        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};