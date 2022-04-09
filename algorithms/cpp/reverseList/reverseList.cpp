/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head, ListNode* p = NULL) {
        if(head == nullptr) return nullptr;
        if(head->next == nullptr) {
            head->next = p;
            return head;
        }
        ListNode* res = reverseList(head->next,head);
        head->next = p;
        return res;
    }
};