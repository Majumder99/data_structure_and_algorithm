class KthLargest
{

public:
    multiset<int> s;
    int ans;
    int kr;
    KthLargest(int k, vector<int> &nums)
    {
        for (auto i : nums)
        {
            s.insert(i);
        }
        kr = k;
    }

    int add(int val)
    {
        s.insert(val);
        auto itr = s.end();
        for (int i = 0; i < kr; i++)
        {
            itr--;
        }
        ans = *itr;
        return ans;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */