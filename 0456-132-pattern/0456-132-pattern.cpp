class Solution {
public:
    bool find132pattern(vector<int>& nums) {

        int nums3 = INT_MIN;

        stack<int> s;

        for (int i = nums.size() - 1; i >= 0; i--) {

            if (nums3 > nums[i])
                return true;

            while (!s.empty() && nums[i] > s.top()) {
                nums3 = s.top();

                s.pop();
            }

            s.push(nums[i]);
        }
        return false;
    }
};