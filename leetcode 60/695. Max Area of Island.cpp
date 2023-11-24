class Solution
{
public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int maxArea = 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        queue<pair<int, int>> q;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1 && !visited[i][j])
                {
                    q.push({i, j});
                    visited[i][j] = true;
                    int area = 0;
                    while (!q.empty())
                    {
                        pair<int, int> curr = q.front();
                        q.pop();
                        area++;
                        for (vector<int> dir : directions)
                        {
                            int x = curr.first + dir[0];
                            int y = curr.second + dir[1];
                            if (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == 1 && !visited[x][y])
                            {
                                q.push({x, y});
                                visited[x][y] = true;
                            }
                        }
                    }
                    maxArea = max(maxArea, area);
                }
            }
        }
        return maxArea;
    }
};