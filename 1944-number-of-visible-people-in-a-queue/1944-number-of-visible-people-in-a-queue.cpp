class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans(n, 0);

        stack<int> s;

        for (int i = n - 1; i >= 0; i--) {

            while (!s.empty() && s.top() < nums[i]) {
                ans[i]++;

                s.pop();
            }

            if (!s.empty()) {
                ans[i]++;
            }

            s.push(nums[i]);
        }
        ans[n - 1] = 0;

        return ans;
    }
};