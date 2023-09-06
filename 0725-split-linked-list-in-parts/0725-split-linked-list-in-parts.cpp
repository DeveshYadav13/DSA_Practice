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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int length = 0;
        ListNode* p = head;
        while(p){
            p=p->next;
            length++;
        }
        int per = length/k;
        int per2count = length%k;
        p = head;
        vector<ListNode*> ans(k,NULL);
        ListNode* node = head, *prev = NULL;
        for (int i = 0; node && i < k; i++, per2count--) {
            ans[i] = node;
            for (int j = 0; j < per + (per2count > 0); j++) {
                prev = node;
                node = node->next;
            }
            prev->next = nullptr;
        }
        return ans;
    }
};