// #include "../include/leetcode/two_sum.hpp"
// #include "../include/leetcode/add_two_numbers.hpp"
// #include "../include/leetcode/longest_substring.hpp"
// #include "../include/leetcode/median_two_array.hpp"
// #include "../include/leetcode/longest_palindromic.hpp"
// #include "../include/leetcode/zigzig_conversation.hpp"
// #include "../include/leetcode/remove_element.hpp"
// #include "../include/leetcode/letter_combination.hpp"
#include "../include/leetcode/validate_parenthesis_string.hpp"
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

    // Solution sol;
    // Solution sol;
    // std::vector<int> nums1 = {1, 3};
    // std::vector<int> nums2 = {2};
    // std::vector<int> nums1 = {1, 2};
    // std::vector<int> nums2 = {3, 4};

    // double result = sol.findMedianSortedArrays(nums1, nums2);
    // std::string result = sol.longestPalindrome("babad");
    // std::string s = "PAYPALISHIRING";
    // std::string result = sol.convert(s, 3);

    // std::cout << "result: " << result << "\n";

    // std::vector<int> nums = {3, 2, 2, 3};
    // int k = sol.removeElement(nums, 3);
    // std::cout << "k: " << k << "\n";

    // for (int i = 0; i < nums.size(); i++) {
    //     std::cout << "nums[i]: " << nums[i] << "\n";
    // }

    // Solution sol;

    Solution sol;
    // std::string s = "()";
    std::string s = "(*))";
    bool isParenthesis = sol.checkValidString(s);

    if (isParenthesis) {
        std::cout << "isParenthesis: " << "true" << "\n";
    } else {
        std::cout << "isParenthesis: " << "false" << "\n";
    }

    return 0;
}