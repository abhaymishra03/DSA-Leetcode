class Solution {
public:
    bool canMakeBouquets(vector<int>& bloomDay, int day, int m, int k) {

        int flowers = 0;
        int bouquets = 0;

        for (int i = 0; i < bloomDay.size(); i++) {

            // Flower has bloomed
            if (bloomDay[i] <= day) {

                flowers++;

                // Enough adjacent flowers for one bouquet
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                // Break in consecutive flowers
                flowers = 0;
            }
        }

        return bouquets >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {


         // Impossible to make m bouquets
        if((long long)m * k > bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = -1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(canMakeBouquets(bloomDay, mid, m, k)) {

                ans = mid;

                // Try to find an even smaller day
                high = mid - 1;
            }
            else {

                // Need more days
                low = mid + 1;
            }
        }

        return ans;
    }
};