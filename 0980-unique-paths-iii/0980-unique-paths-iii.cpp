class Solution {
public:
    int result;
    int nonOb;
    void backTrack(vector<vector<int>>& grid, int i, int j, int count) {

        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() ||
            grid[i][j] == -1)
            return;

        if (grid[i][j] == 2) {

            if (count == nonOb)
                result++;

            return;
        }

        grid[i][j] = -1;

        backTrack(grid, i - 1, j, count+1);
        backTrack(grid, i, j - 1, count+1);
        backTrack(grid, i + 1, j, count+1);
        backTrack(grid, i, j + 1, count+1);

        grid[i][j] = 0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {

        pair<int, int> sp;
        nonOb = 0;
        result = 0;

        for (int i = 0; i < grid.size(); i++) {

            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 0) {

                    nonOb++;
                }
                if (grid[i][j] == 1)
                    sp = {i, j};
            }
        }

        nonOb++;
        int count = 0;

        backTrack(grid, sp.first, sp.second, count);

        return result;
    }
};