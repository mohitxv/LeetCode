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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;
        int carry = 0;
        while(temp1 && temp2){
            ListNode* mover = new ListNode((temp1->val + temp2->val + carry)%10);
            carry = (temp1->val + temp2->val + carry)/10;
            temp->next = mover;
            temp = mover;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while(temp1){
            ListNode* mover = new ListNode((temp1->val + carry)%10);
            carry = (temp1->val + carry)/10;
            temp->next = mover;
            temp = mover;
            temp1 = temp1->next;
        }
        while(temp2){
            ListNode* mover = new ListNode((temp2->val + carry)%10);
            carry = (temp2->val + carry)/10;
            temp->next = mover;
            temp = mover;
            temp2 = temp2->next;
        }
        if(carry != 0){
            ListNode* mover = new ListNode(carry);
            temp->next = mover;
        }
        return ans->next;
    }
};