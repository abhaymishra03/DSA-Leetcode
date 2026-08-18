class Solution {
public:
    int characterReplacement(string s, int k) {

        int left = 0 , right = 0 ;
        int maxChar = 0, maxFreq=0;

        vector<int>freq(26,0);

        while(right < s.size()) {

            freq[s[right]-'A']++;

            maxFreq = max(maxFreq,freq[s[right]-'A']);

            
            int windowSize = right - left +1 ;

            if(windowSize - maxFreq <= k) {
                maxChar=max(maxChar,windowSize);
            } else {

                freq[s[left]-'A']--;
                left++;
            }

            right++;

        }

        return maxChar;
        
    }
};