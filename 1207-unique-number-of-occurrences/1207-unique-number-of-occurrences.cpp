class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int>mp;


        unordered_set<int>s;


        for(int val : arr)
        mp[val]++;

        for(auto & it : mp) {

            if(s.find(it.second)!=s.end())
            return false;

            s.insert(it.second);
        }

        return true;
        
    }
};