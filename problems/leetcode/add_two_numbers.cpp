#include "../../include/leetcode/add_two_numbers.hpp"
#include <algorithm>
#include <iostream>

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* current = &dummy;
    int complement = 0;

    while (l1 || l2 || complement != 0) {
        if (l1) {
            complement += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            complement += l2->val;
            l2 = l2->next;
        }
        current->next = new ListNode(complement % 10);
        complement /= 10;
        current = current->next;
    }

    return dummy.next;
}

ListNode* createListNode(std::vector<int>& nums) {
    ListNode dummy(0);
    ListNode* current = &dummy;

    for (int num : nums) {
        current->next = new ListNode(num);
        current = current->next;
    }

    return dummy.next;
}

void clear(ListNode*& node) {
    while (node) {
        ListNode* temp = node;
        node = node->next;
        delete temp;
    }
}
