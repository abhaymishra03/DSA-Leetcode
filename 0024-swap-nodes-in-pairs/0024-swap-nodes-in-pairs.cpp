class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* first = head;
        ListNode* second = first->next;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (first != NULL && first->next != NULL) {
        second = first->next;
            next = second->next;

            // Change head for first swap
            if (head == first)
                head = second;

            // Connect previous pair
            if (prev != NULL)
                prev->next = second;

            // Swap
            second->next = first;
            first->next = next;

            // Move prev to end of swapped pair
            prev = first;

            // Move first to next pair
            first = next;
        }
        return head;
    }
};