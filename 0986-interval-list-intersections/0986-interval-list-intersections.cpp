class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {

          if (firstList.empty() || secondList.empty())
            return {};

        int i = 0;
        int j = 0;
        int n = firstList.size();
        int m = secondList.size();

        vector<vector<int>> ans;

        while (i < n && j < m) {

            vector<int> list1 = firstList[i];
            vector<int> list2 = secondList[j];

            int st = max(list1[0], list2[0]);
            int end = min(list1[1], list2[1]);

            if (st <= end) {
                ans.push_back({st, end});
            }

            if (firstList[i][1] < secondList[j][1])
                i++;
            else
                j++;
       
    }
    return ans;
        
    }
};