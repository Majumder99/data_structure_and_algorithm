
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::unordered_map<int, int> num_to_index;

        for (int i = 0; i < nums.size(); ++i)
        {
            int complement = target - nums[i];
            // Check if complement exists in the map
            if (num_to_index.find(complement) != num_to_index.end())
            {
                return {num_to_index[complement], i};
            }
            num_to_index[nums[i]] = i;
        }

        // The problem guarantees a solution, so we shouldn't reach here.
        return {};
    }
};
