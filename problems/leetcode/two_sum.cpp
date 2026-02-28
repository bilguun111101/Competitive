#include "../../include/leetcode/two_sum.hpp"
#include <unordered_map>

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> umap;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        auto it = umap.find(complement);
        if (it != umap.end()) {
            return {it->second, static_cast<int>(i)};
        }
        umap[nums[i]] = static_cast<int>(i);
    }

    return {};
}