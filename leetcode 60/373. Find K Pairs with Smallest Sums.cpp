class Solution
{
public:
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        vector<vector<int>> result;
        if (nums1.empty() || nums2.empty() || k <= 0)
            return result;

        auto comp = [&](const pair<int, int> &a, const pair<int, int> &b)
        {
            return nums1[a.first] + nums2[a.second] > nums1[b.first] + nums2[b.second];
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> pq(comp);

        for (int i = 0; i < nums1.size() && i < k; i++)
        {
            pq.emplace(i, 0);
        }
k
        while (k-- > 0 && !pq.empty())
        {
            auto curr = pq.top();
            pq.pop();
            result.push_back({nums1[curr.first], nums2[curr.second]});
            if (curr.second + 1 < nums2.size())
            {
                pq.emplace(curr.first, curr.second + 1);
            }
        }

        return result;
    }
};
