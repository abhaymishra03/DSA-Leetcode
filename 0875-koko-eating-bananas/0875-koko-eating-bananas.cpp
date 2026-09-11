class Solution {
public:

    int maxElement(vector<int>& piles) {
        int maxEl = INT_MIN;

        for(int val:piles) {
            maxEl=max(maxEl,val);
        }

        return maxEl;
    }

    long long calHours(vector<int>& piles,int cap) {

        long long totalHours=0;


        for(int val : piles) {

            totalHours+= ceil((double)val / (double)cap);
        }

        return totalHours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int maxEl = maxElement(piles);

        int st = 1 , end = maxEl;

        while(st <= end) {

            int mid = st + (end-st)/2;

            if(calHours(piles,mid)<=h) {

                end=mid-1;
            } else{
                st=mid+1;
            }
        }

        return st;
        
    }
};