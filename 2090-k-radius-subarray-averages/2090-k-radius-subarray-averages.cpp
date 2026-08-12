class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {

        if(k == 0)return nums;
        
        int n = nums.size();
        vector<int>ans(n,-1);
        if(n <=k || n<(2*k )+1  )return ans;



        long long sum = 0 ;

        for(int i = 0 ; i < (2*k )+1 ; i++){
            sum+=nums[i];
        }

        int j =k , l =0 ;

        for(int i = (2*k) +1; i < n ; i++) {

            ans[j++]=sum/((2*k) +1);

            // add new el

            sum+=nums[i];

            // remove el

            sum-=nums[l++];
        }

                    ans[j]=sum/((2*k) +1);


        return ans;
    }
};