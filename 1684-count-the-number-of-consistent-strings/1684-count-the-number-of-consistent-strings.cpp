class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {


        int count = 0;


        unordered_set<char>s(allowed.begin(),allowed.end());


        for(string str : words) {
            //assume that the word is consistent
            count++;

            for(char ch : str) {

                if(s.find(ch)==s.end()) {
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};