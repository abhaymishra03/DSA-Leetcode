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
    ListNode* deleteDuplicates(ListNode* head) {

        if(!head)
        return NULL;
        if(!head->next)
        return head;

        

        map<int,int>mp;

        ListNode* temp = head;

        while(temp) {

          
                mp[temp->val]++;
            temp = temp->next;
        }

        int size = 0; 
        for(auto it : mp) {
            if(it.second==1)size++;
        }

        if(size==0)return NULL;


        temp = head;
        ListNode* prev =NULL;

        while(size) {

            prev = temp;

            temp=temp->next;

            size--;


        }


        prev->next=NULL;

        temp = head;

        for(auto it : mp) {

            if(it.second == 1) {

                temp->val = it.first;
                temp= temp->next;
            }

        }

        return head;


        
    }
};