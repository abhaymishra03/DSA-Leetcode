class Solution {
public:
    int minSwaps(string s) {

        int count = 0 ;
        int open = 0;

        for(char ch : s) {

            if(ch == '[')
            open++; 
            else {

                if(open > 0)
                open--;
                else 
                count++;
            }
           
        }

        return (count+1)/2;
        
    }
};