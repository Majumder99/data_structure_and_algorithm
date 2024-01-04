class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        backtrack(ans, temp, candidates, target, 0);
        return ans;
    }

    void backtrack(vector<vector<int>> &ans, vector<int> &temp, vector<int> &candidates, int target, int start)
    {
        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }
        for (int i = start; i < candidates.size(); i++)
        {
            if (candidates[i] > target)
                break;
            temp.push_back(candidates[i]);
            backtrack(ans, temp, candidates, target - candidates[i], i);
            temp.pop_back();
        }
    }
};