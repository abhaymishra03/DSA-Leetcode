class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {


        unordered_map<char,int>mp;


        for(int val : magazine) 
        mp[val]++;

        for(int val : ransomNote){
        mp[val]--;
        
        if(mp[val] < 0)
        return false;}


    

        return true;
        
    }
};