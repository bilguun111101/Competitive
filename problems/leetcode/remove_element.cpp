#include "../../include/leetcode/remove_element.hpp"

int Solution::removeElement(std::vector<int>& nums, int val) {
    std::vector<int> _nums;
    for (int i = 0; i < nums.size(); i++) {
        if (val != nums[i]) 
            _nums.push_back(nums[i]);
    }
    nums = _nums;
    return _nums.size();
}