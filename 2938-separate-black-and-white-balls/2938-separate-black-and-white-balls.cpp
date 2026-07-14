class Solution {
public:
    long long minimumSteps(string s) {

        long long countBlack = 0 , swapCount = 0;

        for(char ch : s) {
            
            if(ch == '1'){
                countBlack++;
            } else{
                swapCount+=countBlack;
        }}

        return swapCount;
        
    }
};