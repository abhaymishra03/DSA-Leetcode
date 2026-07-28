class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;

        for (int el : nums) {
            if (val != el)
                nums[i++] = el;
        }
        return i;
    }
};