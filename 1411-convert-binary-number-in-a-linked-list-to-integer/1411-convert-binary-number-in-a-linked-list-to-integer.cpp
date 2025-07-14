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
    int getDecimalValue(ListNode* head) {
        int result = 0;
        int power = 0;
        string str = "";
        while (head != nullptr) {

            str = str + to_string(head->val);;
            head = head->next;
        }
        for(int i= str.length()-1;i>=0;i--){
            if(str[i] == '1'){
                result = result + pow(2, power);
            }
            power ++;
        }
        return result;
    }
};