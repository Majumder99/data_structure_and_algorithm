class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> visited(nums.size(), false);
        dfs(nums, ans, temp, visited);
        return ans;
    }

    void dfs(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
    {
        if (temp.size() == nums.size())
        {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (visited[i])
                continue;
            visited[i] = true;
            temp.push_back(nums[i]);
            dfs(nums, ans, temp, visited);
            temp.pop_back();
            visited[i] = false;
        }
    }
};