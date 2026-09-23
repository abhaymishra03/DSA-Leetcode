class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {




       
        map<string,int>mp;


        for(string word : words) 
        mp[word]++;


        vector<pair<int,string>>v;


        for(auto& it : mp){
        v.push_back({it.second,it.first});}


        sort(v.begin(), v.end(), [](const pair<int,string>& a,
                                    const pair<int,string>& b) {

            if(a.first != b.first)
                return a.first > b.first;

            return a.second < b.second;
        });



        vector<string>ans;


        for(int i = 0 ; i < k ; i++)
        ans.push_back(v[i].second);



        return ans;



        
    }
};