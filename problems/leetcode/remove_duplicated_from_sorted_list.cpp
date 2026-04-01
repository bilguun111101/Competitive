#include "../../include/leetcode/remove_duplicated_from_sorted_list.hpp"

// ListNode* Solution::deleteDuplicates(ListNode *head) {
//     std::unordered_set<int> uset;
//     ListNode* node = new ListNode(0);
//     ListNode* curr = node;

//     while (head != nullptr) {
//         /* code */
//         if (uset.find(head->val) == uset.end()) {
//             ListNode* _node = new ListNode(head->val);
//             curr->next = _node;
//             curr = curr->next;
//             uset.insert(head->val);
//         }
//         head = head->next;
//     }

//     return node->next;
// }

ListNode* Solution::deleteDuplicates(ListNode *head) {
    ListNode* curr = head;

    while (curr != nullptr && curr->next != nullptr) {
        /* code */
        if (curr->val == curr->next->val) {
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }
    

    return head;
}