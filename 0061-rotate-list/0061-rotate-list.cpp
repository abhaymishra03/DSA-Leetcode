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
    ListNode* rotateRight(ListNode* head, int k) {

        int sz = 1;
        if(!head)return head;

        ListNode* temp = head;

        while(temp->next) {
            sz++;
            temp = temp->next;
        }

        k%=sz;
        if(k == 0) return head;

        ListNode* fast = head,*slow = head;


        for(int i = 0 ; i < k ; i++ ) {

            fast = fast->next;

        }

        while(fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        // re-arrangements
        ListNode* temp2 = slow->next;//head
        slow->next=NULL;
        temp->next= head;

        return temp2;


        
    }
};