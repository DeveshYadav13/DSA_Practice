/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int prev = -1;
    int maxcnt = 0;
    vector<int>res;
    int currcnt = 0;
        
    void trav(TreeNode* root){
        if(!root){return;}
        
        trav(root->left);
        
        if(prev==-1){
            prev = root->val;
            currcnt = 1;
            res.push_back(root->val);
            maxcnt = 1;
        }
        else{
            if(root->val==prev){
                currcnt++;
                if(currcnt>maxcnt){
                    maxcnt = currcnt;
                    res.clear();
                    res.push_back(root->val);
                }
                else if(currcnt==maxcnt){
                    res.push_back(root->val);
                }
            }
            else{
                prev = root->val;
                currcnt = 1;
                if(currcnt==maxcnt){
                    res.push_back(root->val);
                }
            }
        }
        
        trav(root->right);
    }
    
    vector<int> findMode(TreeNode* root) {
        trav(root);
        return res;
    }
};