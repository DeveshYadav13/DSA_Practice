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
        ListNode* ans = new ListNode();
        bool first = true;
        ListNode* p = ans;
         int carry = 0;
        while(l1 || l2){
           int sum;
            if(l1 && l2)sum = l1->val + l2->val + carry;
            else if(l1 && !l2)sum = l1->val +carry;
            else if(!l1 && l2)sum = l2->val +carry;
            if(sum>9){ sum = sum%10; carry=1;}
            else{carry=0;}
            if(first){
                ans->val = sum;
                ans->next = NULL;
                first = false;
            }
            else{
                ListNode* t = new ListNode();
                p->next = t;
                t->next = NULL;
                t->val = sum;
                p=p->next;
            }
          
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
        }
        if(!l1 && !l2 && carry>0){
            ListNode* t  = new ListNode();
            p->next = t;
            t->next=NULL;
            t->val = carry;
        }
        return ans;
    }
};