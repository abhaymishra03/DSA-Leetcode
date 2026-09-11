class Solution {
public:

    int canWeDoIt(vector<int>& weights,int maxWeight) {
        int currWeight=0,totalDays=1;


        for(int val : weights) {

            currWeight+=val;

            if(currWeight>maxWeight) {
                currWeight=val;
            totalDays++;
            }
        }
            return totalDays;
    }
    int shipWithinDays(vector<int>& weights, int days) {

        int totalWeight = 0;


         int maxWeight = 0;

        for (int val : weights) {
            totalWeight += val;
            maxWeight = max(maxWeight, val);
        }

        int st = maxWeight,end=totalWeight;


        while(st <= end) {

            int mid = st+ (end-st)/2;

            if(canWeDoIt(weights,mid)<=days) {

                end=mid-1;
            }else{
                st=mid+1;
            }

        }


        return st;

        
    }
};