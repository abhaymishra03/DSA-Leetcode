class Solution {
public:
    int mergeTwo(int a, int b) {
        string num = to_string(a)+to_string(b);





        


        return stoi(num);
    }
    int minMergedInteger(vector<int>& nums) {



        int minMerge = INT_MAX;


        for(int i = 0 ; i < nums.size()-1; i+=2) {

            minMerge = min(minMerge,mergeTwo(nums[i],nums[i+1]));
        }
        return minMerge;
    }
};