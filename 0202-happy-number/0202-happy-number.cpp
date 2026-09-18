class Solution {
public:
    int sq(int n) {

        int sum = 0;

        while(n) {

            int rem = n%10;

            sum = sum + rem*rem;

            n/=10;
        }

        return sum;
    }
    bool isHappy(int n) {


        unordered_map<int,int>mp;


        

        while(true) {

            n = sq(n);

            if(mp.find(n)!=mp.end())break;
            mp[n]++;

            

            if(n == 1)return true;

        }



        return false;
    }
};