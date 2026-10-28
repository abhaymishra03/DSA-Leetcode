class Solution {
public:
    int n, m;
    vector<vector<char>> grid;

    void dfs(int i, int j, vector<int>& ans) {
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 'V') {

            return;
        }

        char op = grid[i][j];
        grid[i][j] = 'V';

        if (op == 'U') {
            ans[0]=i;
            ans[1]=j;
            dfs(i - 1, j, ans);
        }
        if (op == 'D') {
            ans[0]=i;
            ans[1]=j;
            dfs(i + 1, j, ans);
        }
        if (op== 'L') {
            ans[0]=i;
            ans[1]=j;
            dfs(i, j - 1, ans);
        }
        if (op == 'R') {
            ans[0]=i;
            ans[1]=j;
            dfs(i, j + 1, ans);
        }
    }
    vector<int> lastVisitedCell(vector<vector<char>>& mat) {

        grid = mat;
        n = grid.size();
        m = grid[0].size();

        vector<int> ans={0,0};

        dfs(0, 0, ans);
        return ans;
    }
};