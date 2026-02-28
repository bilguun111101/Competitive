#pragma once
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(nullptr) {}
};

ListNode* createListNode(std::vector<int>& nums);
void clear(ListNode*& node);

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};