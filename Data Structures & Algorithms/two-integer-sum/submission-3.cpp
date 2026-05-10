class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
    int n = nums.size();
    int complement = 0;
    unordered_map<int, int> seen;

    for (int i = 0; i < n; i++) {
        complement = target - nums[i];

        if (seen.contains(complement)) {
            return vector{seen[complement], i};
        }

        seen[nums[i]] = i;
    }

    return {};

    }
};
