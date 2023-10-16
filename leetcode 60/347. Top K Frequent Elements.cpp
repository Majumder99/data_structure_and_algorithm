class Solution
{
public:
    static bool compare(pair<int, int> a, pair<int, int> b)
    {
        return a.first > b.first;
    }
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        vector<pair<int, int>> v;
        vector<int> res;

        for (auto i : nums)
        {
            m[i]++;
        }
        for (auto i : m)
        {
            v.push_back(make_pair(i.second, i.first));
        }
        sort(v.begin(), v.end(), compare);
        for (auto i : v)
        {
            if (k == 0)
            {
                return res;
            }
            res.push_back(i.second);
            k--;
        }
        return res;
    }
};