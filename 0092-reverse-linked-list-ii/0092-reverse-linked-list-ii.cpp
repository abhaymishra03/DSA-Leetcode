class Solution {
public:

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* next = curr->next;

            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* slow = dummy;
        ListNode* fast = head;

        // Move fast to the right position
        for (int i = 1; i <= right - left; i++) {
            fast = fast->next;
        }

        // Move both pointers until slow is before left
        for (int i = 1; i < left; i++) {
            fast = fast->next;
            slow = slow->next;
        }

        // slow -> node before left
        // fast -> node at right

        ListNode* tail = fast->next;
        ListNode* currHead = slow->next;

        // Cut the section
        fast->next = NULL;

        // Reverse left -> right
        slow->next = reverseList(currHead);

        // currHead is now the last node of reversed section
        currHead->next = tail;

        return dummy->next;
    }
};