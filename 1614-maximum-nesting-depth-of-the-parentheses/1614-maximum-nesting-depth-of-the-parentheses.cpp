class Solution {
public:
    int maxDepth(string str) {

        int maxDepth = 0;int depth = 0;


        for (char ch : str) {


            maxDepth = max(maxDepth, depth);

            if (ch == '(')
                depth++;

            if (ch == ')')
                depth--;
        }
        return maxDepth;
    }
};