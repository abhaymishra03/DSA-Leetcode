class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {

        if (firstList.empty() || secondList.empty())
            return {};
        
        int i = 0 , j = 0,n=firstList.size(),m=secondList.size();


        vector<vector<int>> ans;
        while(i <n && j < m) {

            int st = max(firstList[i][0],secondList[j][0]);

            int end = min(firstList[i][1],secondList[j][1]);


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