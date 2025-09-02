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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*Odd  = head;
        ListNode*Even = head->next;
        ListNode*evenStart=NULL;
        evenStart=head->next;
        while(Even!=NULL && Even->next!=NULL){
            Odd->next=Even->next;
            Even->next=Even->next->next;
            Odd=Odd->next;
            Even=Even->next;
        }
       Odd->next=evenStart;
       return head; 
    }
};