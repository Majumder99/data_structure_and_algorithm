class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();

        // Step 1: Find the first pair (i, i+1) where nums[i] < nums[i+1]
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1])
        {
            i--;
        }

        // Step 2: If no such pair is found, reverse the entire array
        if (i == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find the smallest element to the right of nums[i] that is larger than nums[i]
        int j = n - 1;
        while (nums[j] <= nums[i])
        {
            j--;
        }

        // Step 4: Swap nums[i] and nums[j]
        swap(nums[i], nums[j]);

        // Step 5: Reverse the subarray to the right of i
        reverse(nums.begin() + i + 1, nums.end());
    }
};
