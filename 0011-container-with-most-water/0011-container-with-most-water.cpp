class Solution {
public:
    int maxArea(vector<int>& height) {


        int left = 0 , right = height.size()-1;



        int maxWater = INT_MIN;


        while(left < right) {

            int width = right-left;

            int currHeight = min(height[left],height[right]);


            maxWater = max(maxWater,currHeight*width);
           height[left] > height[right]?right--:left++;
        }
        return maxWater;
    }
};