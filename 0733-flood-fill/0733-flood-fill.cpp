class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc,
                                  int color) {

        int oriColor = grid[sr][sc];

        if (oriColor == color)
            return grid;

        queue<pair<int, int>> q;

        q.push({sr, sc});

        grid[sr][sc] = color;

        while (!q.empty()) {

            pair<int, int> curr = q.front();
            int r = curr.first;
            int c = curr.second;
            q.pop();

            if (r - 1 >= 0 && grid[r - 1][c] == oriColor) {
                q.push({r - 1, c});
                grid[r - 1][c] = color;
            }
            if (c - 1 >= 0 && grid[r][c - 1] == oriColor) {
                q.push({r, c - 1});
                grid[r][c - 1] = color;
            }
            if (r + 1 < grid.size() && grid[r + 1][c] == oriColor) {
                q.push({r + 1, c});
                grid[r + 1][c] = color;
            }
            if (c + 1 < grid[0].size() && grid[r][c + 1] == oriColor) {
                q.push({r, c + 1});
                grid[r][c + 1] = color;
            }
        }

        return grid;
    }
};