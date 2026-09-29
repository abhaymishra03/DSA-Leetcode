class Solution {
public:
    vector<int> pse(vector<int>& nums) {

        vector<int> ans(nums.size(), -1);
        stack<int> s;

        for (int i = 0; i < nums.size(); i++) {

            while (!s.empty() && nums[s.top()] >= nums[i])
                s.pop();

            if (!s.empty())
                ans[i] = s.top();

            s.push(i);
        }
        return ans;
    }
    vector<int> nse(vector<int>& nums) {

        vector<int> ans(nums.size(), nums.size());
        stack<int> s;

        for (int i = nums.size() - 1; i >= 0; i--) {

            while (!s.empty() && nums[s.top()] > nums[i])
                s.pop();

            if (!s.empty())
                ans[i] = s.top();

            s.push(i);
        }
        return ans;
    }
    vector<int> ple(vector<int>& nums) {

        vector<int> ans(nums.size(), -1);
        stack<int> s;

        for (int i = 0; i < nums.size(); i++) {

            while (!s.empty() && nums[s.top()] <= nums[i])
                s.pop();

            if (!s.empty())
                ans[i] = s.top();

            s.push(i);
        }
        return ans;
    }
    vector<int> nle(vector<int>& nums) {

        vector<int> ans(nums.size(), nums.size());
        stack<int> s;

        for (int i = nums.size() - 1; i >= 0; i--) {

            while (!s.empty() && nums[s.top()] < nums[i])
                s.pop();

            if (!s.empty())
                ans[i] = s.top();

            s.push(i);
        }
        return ans;
    }

    long long subArrayRanges(vector<int>& nums) {

        vector<int> prevSmall = pse(nums);
        vector<int> nextSmall = nse(nums);
        vector<int> prevLarge = ple(nums);
        vector<int> nextLarge = nle(nums);

        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {

            long long smallerRange =
                1LL * (i - prevSmall[i]) * (nextSmall[i] - i) * nums[i];

            long long largerRange =
                1LL * (i - prevLarge[i]) * (nextLarge[i] - i) * nums[i];

            sum += largerRange - smallerRange;
        }

        return sum;
    }
};