// #include "../include/leetcode/two_sum.hpp"
#include "../include/leetcode/add_two_numbers.hpp"
#include <iostream>

int main() {
    std::vector<int> nums1 = {2, 4, 3};
    std::vector<int> nums2 = {5, 6, 4};
    ListNode* l1 = createListNode(nums1);
    ListNode* l2 = createListNode(nums2);

    Solution sol;

    ListNode* l3 = sol.addTwoNumbers(l1, l2);
    ListNode* curr = l3;

    while (curr) {
        /* code */
        std::cout << "curr: " << curr->val << "\n";
        curr = curr->next;
    }

    clear(l1);
    clear(l2);
    clear(l3);

    return 0;
}