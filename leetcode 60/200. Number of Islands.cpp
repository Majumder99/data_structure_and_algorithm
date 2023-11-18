class Solution
{
public:
    void dfs(vector<vector<char>> &grid, int x, int y)
    {
        int m = grid.size();
        int n = grid[0].size();

        if (x < 0 || y < 0 || x >= m || y >= n || grid[x][y] == '0')
        {
            return; // Out of bounds or water cell
        }

        // Mark current cell as visited
        grid[x][y] = '0';

        // Check all adjacent cells (up, down, left, right)
        dfs(grid, x + 1, y);
        dfs(grid, x - 1, y);
        dfs(grid, x, y + 1);
        dfs(grid, x, y - 1);
    }

    int numIslands(vector<vector<char>> &grid)
    {
        if (grid.empty())
            return 0;

        int num_islands = 0;
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == '1')
                {
                    ++num_islands;   // Found new island
                    dfs(grid, i, j); // Perform DFS to mark all connected lands
                }
            }
        }

        return num_islands;
    }
};
