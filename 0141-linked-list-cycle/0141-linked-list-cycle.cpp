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
    bool hasCycle(ListNode *head) {
        if(head==NULL){return false;}
        ListNode* slowptr = head, *fastptr = head;
        while(fastptr != NULL && fastptr->next != NULL)
        {
            fastptr = fastptr->next->next;
            slowptr = slowptr->next;
        
            if(fastptr == slowptr)
                return true;
        }

        return false;
    }
};