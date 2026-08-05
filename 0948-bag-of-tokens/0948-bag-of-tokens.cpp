class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {

        sort(tokens.begin(),tokens.end());

        int i = 0 , j = tokens.size()-1;

        int score = 0;


        while( i <= j ) {
            if(power >= tokens[i]){
                score++;
                power-= tokens[i];
                i++;
            } else if(power < tokens[i] && i<j) {
                if(score <= 0) return 0;

                score--;
                power+=tokens[j];
                j--;
            } else {
                return score;
            }
        }
        return score;
    }
};