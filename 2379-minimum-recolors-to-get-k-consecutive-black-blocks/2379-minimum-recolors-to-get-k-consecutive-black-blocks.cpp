class Solution {
public:
    int minimumRecolors(string blocks, int k) {



        int currB = 0;


        for(int i = 0; i < k ; i++){

            if(blocks[i]=='B')
            currB++;
        }

        int maxB = currB;


        for(int i = k ; i< blocks.size(); i++) {

            if(blocks[i-k]=='B')
            currB--;
            if(blocks[i]=='B')
            currB++;

            maxB=max(maxB,currB);
            
        }
        int ans = k - maxB;


        if(ans< 0)
        return 0;


        return ans;

    }
};