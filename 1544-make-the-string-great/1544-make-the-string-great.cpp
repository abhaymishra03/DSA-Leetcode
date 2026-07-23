class Solution {
public:
    string makeGood(string str) {
        stack<char>s;
        s.push(str[0]);
       
        for(int i = 1 ; i < str.size() ; i++ ) {
            if(!s.empty() && tolower(str[i])==tolower(s.top()) && s.top()!=str[i]) {
               s.pop();
             
            //    continue;
            }

            else s.push(str[i]);

        }
        string ans= "";
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};