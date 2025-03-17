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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* sorted = new ListNode(0);
        ListNode* curr = head;

        if (!head || !head->next) return head;

        while(curr){
            ListNode* prev = sorted;
            ListNode* nextNode = curr->next;

            while(prev ->next && prev -> next ->val < curr->val){
                prev = prev->next;
            }
            curr->next = prev ->next;
            prev -> next = curr;

            curr = nextNode;
        }
        return sorted->next;

    }
};