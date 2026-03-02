#include "../../include/leetcode/median_two_array.hpp"
#include <iostream>

double Solution::findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    size_t i1 = 0, i2 = 0;
    std::vector<int32_t> vector;
    vector.reserve(nums1.size() + nums2.size());

    while (i1 < nums1.size() && i2 < nums2.size()) {
        /* code */
        if (nums1[i1] <= nums2[i2]) vector.push_back(nums1[i1++]);
        else vector.push_back(nums2[i2++]);
    }

    while (i1 < nums1.size()) vector.push_back(nums1[i1++]);
    while (i2 < nums2.size()) vector.push_back(nums2[i2++]);
    
    double median = 0.0;
    if (vector.size() % 2 == 0) median = (double(vector[vector.size() / 2]) + double(vector[vector.size() / 2 - 1])) / 2;
    else median = vector[vector.size() / 2];

    return median;
}