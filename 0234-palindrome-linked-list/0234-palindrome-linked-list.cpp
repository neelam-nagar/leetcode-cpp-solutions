class Solution {
public:
    //reverse linked list
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        while (head != NULL) {
            ListNode* nextNode = head->next;
            head->next = prev;              
            prev = head;                     
            head = nextNode;                 
        }
        return prev; 
    }

    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true;

        // Step 1: Middle nikalna (slow-fast pointer)
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;        
            fast = fast->next->next;
        }

        // Step 2: Second half ko reverse karo
        ListNode* second = reverseList(slow->next);

        // Step 3: Compare first half aur reversed second half
        ListNode* first = head;
        ListNode* temp = second;
        bool ans = true;
        while (temp != NULL) {
            if (first->val != temp->val) {
                ans = false;
                break;
            }
            first = first->next;
            temp = temp->next;
        }

        return ans;
    }
};