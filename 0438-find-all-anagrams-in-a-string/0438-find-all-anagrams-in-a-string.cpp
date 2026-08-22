class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(char ch : p)
        mp1[ch]++;

        //first window

        for(int i = 0; i < p.size(); i++) {

            mp2[s[i]]++;



        }

        vector<int>ans;
        int j = 0;

        if(mp1==mp2)
        ans.push_back(j);



        //slide window

        for(int i = p.size();i<s.size(); i++ ) {

            mp2[s[i]]++;

            mp2[s[i-p.size()]]--;
            if(mp2[s[i-p.size()]]==0)
            mp2.erase(s[i-p.size()]);
            
            j++;

            if(mp1==mp2)
            ans.push_back(j);


        }

        return ans;
        
    }
};