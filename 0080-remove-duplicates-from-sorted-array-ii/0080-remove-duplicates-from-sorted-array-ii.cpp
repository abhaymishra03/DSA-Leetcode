class Solution {
public:
    int removeDuplicates(vector<int>& nums) {


        deque<int>dq;

        unordered_map<int,int>mp;


        for(int val : nums) {


            if(!dq.empty() && mp[val]>=2 && dq.back()==val)
            continue;

           dq.push_back(val);
            mp[val]++;
        }


          int i = 0;

        while(!dq.empty()){
        nums[i++]=dq.front();
        dq.pop_front();}


        return i;
        
    }
};