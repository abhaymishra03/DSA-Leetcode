class Solution {
public:
    vector<int> pseFn(vector<int>& nums) {

        vector<int> ans(nums.size(), -1);
        stack<int> s;

        for (int i = 0; i < nums.size(); i++) {

            while (!s.empty() && nums[s.top()] > nums[i])
                s.pop();

            if (!s.empty())
                ans[i] = s.top();

            s.push(i);
        }

        return ans;
    }

    vector<int> nseFn(vector<int>& nums) {

        vector<int> ans(nums.size(), nums.size());
        stack<int> s;

        for (int i = nums.size() - 1; i >= 0; i--) {

            while (!s.empty() && nums[s.top()] >= nums[i])
                s.pop();

            if (!s.empty())
                ans[i] = s.top();

            s.push(i);
        }

        return ans;
    }

    int sumSubarrayMins(vector<int>& nums) {

        vector<int> nse = nseFn(nums);
        vector<int> pse = pseFn(nums);

        int MOD = 1e9 + 7;

        long long total = 0;

        for (int i = 0; i < nums.size(); i++) {

            long long left = i - pse[i];
            long long right = nse[i] - i;

            total = (total + (left * right * nums[i]) % MOD) % MOD;
        }

        return total;
    }
};