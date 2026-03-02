// #include "../include/leetcode/two_sum.hpp"
// #include "../include/leetcode/add_two_numbers.hpp"
// #include "../include/leetcode/longest_substring.hpp"
#include "../include/leetcode/median_two_array.hpp"
#include <iostream>

int main() {
    // std::vector<int> nums1 = {2, 4, 3};
    // std::vector<int> nums2 = {5, 6, 4};
    // ListNode* l1 = createListNode(nums1);
    // ListNode* l2 = createListNode(nums2);

    // Solution sol;

    // ListNode* l3 = sol.addTwoNumbers(l1, l2);
    // ListNode* curr = l3;

    // while (curr) {
    //     /* code */
    //     std::cout << "curr: " << curr->val << "\n";
    //     curr = curr->next;
    // }

    // clear(l1);
    // clear(l2);
    // clear(l3);

    // Solution sol;
    // std::string s = "abcabcbb";
    // std::string s = "pwwkew";
    // std::string s = "abba";
    // // std::string s = "bbbbb";
    // int result = sol.lengthOfLongestSubstring(s);

    // std::cout << "result:   " << result << "\n";


    Solution sol;
    // std::vector<int> nums1 = {1, 3};
    // std::vector<int> nums2 = {2};
    std::vector<int> nums1 = {1, 2};
    std::vector<int> nums2 = {3, 4};

    double result = sol.findMedianSortedArrays(nums1, nums2);

    std::cout << "result: " << result << "\n";

    return 0;
}