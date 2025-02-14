/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> st;
        ListNode* temp = headA;
        while(temp){
            st.insert(temp);
            temp = temp->next;
        }
        ListNode* temp1 = headB;
        while(temp1){
            if(st.find(temp1) != st.end()) return temp1;
            temp1 = temp1->next;
        }
        return NULL;
    }
};