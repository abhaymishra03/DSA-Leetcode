class Solution {
public:
    int maxDepth(string str) {

        int maxDepth = 0;


        stack<char>s;


        for(char ch : str) {

            int n =s.size();

            maxDepth=max(maxDepth,n);


            if(ch == '(')
            s.push(ch);

            if(ch == ')')
            s.pop();
        }
        return maxDepth;
    }
};