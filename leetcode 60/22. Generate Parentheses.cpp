class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        string s = "";
        generate(ans, s, 0, 0, n);
        return ans;
    }

    void generate(vector<string> &ans, string s, int open, int close, int n)
    {
        if (s.length() == 2 * n)
        {
            ans.push_back(s);
            return;
        }

        if (open < n)
            generate(ans, s + "(", open + 1, close, n);
        if (close < open)
            generate(ans, s + ")", open, close + 1, n);
    }
};