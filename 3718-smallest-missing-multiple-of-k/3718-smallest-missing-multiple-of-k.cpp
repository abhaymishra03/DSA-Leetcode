class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {


       vector<bool>seen(101,false);


       for(int val : nums) {
        if(val%k==0) {
            seen[val/k]=true;
        }
       }


       int i = 1;

       while(i <=101) {
        if(seen[i]) {
            i++;
        } else{
            return i*k;
        }

       }

       return -1;


        
    }
};