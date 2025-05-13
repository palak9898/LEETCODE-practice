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
    ListNode* middleNode(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* ptr = dummy;
        int length =0;

        while(dummy->next != nullptr){
            dummy = dummy->next;
            length +=1;
        }
        int mid = length /2;
        for(int i=0; i< mid; i++){
            ptr = ptr->next;
        }
        return ptr->next;
    }
};