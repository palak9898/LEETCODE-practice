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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next){
            return NULL;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* ptr1 = dummy;
        ListNode* ptr2 = dummy;
        int length =0;

        while(dummy->next != nullptr){
            dummy = dummy->next;
            length +=1;
        }
        int mid = length /2;
        for(int i=0; i< mid; i++){
            ptr1 = ptr1->next;
        }
        for(int i=0; i<= mid; i++){
            ptr2 = ptr2->next;
        }
        ptr1->next = ptr2->next;
        return head;

    }
};