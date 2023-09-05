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
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* p = head;
        while(p->next){
            int data = __gcd(p->val, p->next->val);
            ListNode* ins = new ListNode(data);
            ins->next = p->next;
            p->next = ins;
            p = ins->next;
        }
        
        return head;
    }
};