class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        for (int val : nums) {
            if (val == 0)
                count0++;
            if (val == 1)
                count1++;
            if (val == 2)
                count2++;
        }

        int i = 0;

        for (int j = 0; j < count0; j++) {
            nums[i++] = 0;
        }
        for (int j = 0; j < count1; j++) {
            nums[i++] = 1;
        }
        for (int j = 0; j < count2; j++) {
            nums[i++] = 2;
        }
    }
};