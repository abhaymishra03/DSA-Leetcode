class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int k = s1.size();
        if(s2.size()<k)return false;

        vector<int>freq1(26,0);
        vector<int>freq2(26,0);

        for(char ch : s1) {
            freq1[ch-'a']++;
        }

        // first window

        for(int i = 0 ; i < k ; i++) {

            freq2[s2[i]-'a']++;

        }

        if(freq1==freq2)return true;


        //slide the window 

        for(int i = k ; i < s2.size();i++) {
            

            //add 
            freq2[s2[i]-'a']++;

            //remove
            freq2[s2[i-k]-'a']--;


            if(freq1==freq2)return true;

        }
        return false;
    }
};