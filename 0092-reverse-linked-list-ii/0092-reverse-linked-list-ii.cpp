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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL || left==right){
            return head;
        }
        ListNode* p = NULL,*prev = NULL, *mid=NULL,*q=head,*r = head->next;
        int temp = left;
        while(temp--){
            p=q;
            q=r;
            r=r->next;
        }
        if(left!=1){
            prev=head;
            while(prev->next!=p){
                prev=prev->next;
            }
        }
        mid = p;
        int val = right-left;
        while(val--){
            q->next=p;
            p=q;
            q=r;
            if(r)r=r->next;
        }
        if(left!=1){prev->next = p;}
        else{head=p;}
        if(q==NULL){mid->next=NULL;}
        else{mid->next=q;}
        return head;
    }
};