class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        for(int val : nums2){
            nums1.push_back(val);
        }
        sort(nums1.begin(),nums1.end());

            int n = nums1.size();
        if(nums1.size()%2!=0){
            n/=2;
            return (double)nums1[n];
        } else {
            double med;
            med =( nums1[n/2] + nums1[n/2 -1])/2.0;
            return med;
        }
        
    }
};