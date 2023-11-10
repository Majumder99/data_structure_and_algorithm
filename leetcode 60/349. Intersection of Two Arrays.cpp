class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        vector<int> res;
        for (auto it = s1.begin(); it != s1.end(); it++)
        {
            if (s2.find(*it) != s2.end())
            {
                res.push_back(*it);
            }
        }
        return res;
    }
};