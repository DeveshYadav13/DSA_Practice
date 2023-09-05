/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head){return NULL;}
        
        unordered_map<Node*,int>addressToIndexMap;
        unordered_map<int,int>indexRandomToIndexMap;
        
        Node* p = head;
        int i = 0;
        while(p){
            addressToIndexMap[p] = i;
            i++;
            p = p->next;
        }
        
        p = head;
        while(p){
            if(!p->random){
                indexRandomToIndexMap[addressToIndexMap[p]] = -1;
            }
            else{
                indexRandomToIndexMap[addressToIndexMap[p]] = addressToIndexMap[p->random];
            }
            p=p->next;
        }
        
        Node* nHead = new Node(head->val);
        
        Node* t = nHead;
        p = head->next;
        
        while(p){
            Node* ins = new Node(p->val);
            t->next = ins;
            t = ins;
            p = p->next;
        }
        
        i = 0;
        p = nHead;
        while(p){
            int idx = indexRandomToIndexMap[i++];

            //cout<<i-1<<" "<<idx<<" "<<p->val<<"\n";
            if(idx==-1){p = p->next; continue;}
            
            Node* temp = nHead;
            while(idx--){
                temp = temp->next;
            }
            p->random = temp;
            p = p->next;
        }
        
        return nHead;
    }
};