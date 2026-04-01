#pragma once

#include <unordered_set>

struct ListNode {
    /* data */
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {};
    ListNode(int val) : val(val), next(nullptr) {};
    ListNode(int val, ListNode *next) : val(val), next(next) {};
};

class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head);
};
