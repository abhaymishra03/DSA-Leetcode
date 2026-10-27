class Solution {
public:
    vector<string> createGrid(int m, int n) {

        string s = "";


        for(int i = 0 ; i < n ; i++) {

            s+='#';
        }
        vector<string>ans(m,s);

        // set top row (n) to .


        for(int i = 0 ; i < n ; i++) {

            ans[0][i]='.';
        }
        for(int i = 0 ; i < m ; i++) {

            ans[i][n-1]='.';
        }
        return ans;
    }
};