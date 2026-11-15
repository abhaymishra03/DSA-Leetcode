class Solution {
public:
    vector<int> findAnagrams(string s, string p) {



        vector<int>ans;
        unordered_map<char,int>x;
        unordered_map<char,int>mp;

        for(char ch : p) {
            x[ch]++;
        }

        int k = p.size();


        for(int i = 0; i < k; i++) {

            mp[s[i]]++;
        }

        if(mp == x)
        ans.push_back(0);



        for(int i = k ; i < s.size();i++) {

            mp[s[i]]++;
            mp[s[i-k]]--;


            if(mp[s[i-k]]==0)
            mp.erase(s[i-k]);


            if(mp==x)
            ans.push_back(i-k+1);
        }
        return ans;
    }
};