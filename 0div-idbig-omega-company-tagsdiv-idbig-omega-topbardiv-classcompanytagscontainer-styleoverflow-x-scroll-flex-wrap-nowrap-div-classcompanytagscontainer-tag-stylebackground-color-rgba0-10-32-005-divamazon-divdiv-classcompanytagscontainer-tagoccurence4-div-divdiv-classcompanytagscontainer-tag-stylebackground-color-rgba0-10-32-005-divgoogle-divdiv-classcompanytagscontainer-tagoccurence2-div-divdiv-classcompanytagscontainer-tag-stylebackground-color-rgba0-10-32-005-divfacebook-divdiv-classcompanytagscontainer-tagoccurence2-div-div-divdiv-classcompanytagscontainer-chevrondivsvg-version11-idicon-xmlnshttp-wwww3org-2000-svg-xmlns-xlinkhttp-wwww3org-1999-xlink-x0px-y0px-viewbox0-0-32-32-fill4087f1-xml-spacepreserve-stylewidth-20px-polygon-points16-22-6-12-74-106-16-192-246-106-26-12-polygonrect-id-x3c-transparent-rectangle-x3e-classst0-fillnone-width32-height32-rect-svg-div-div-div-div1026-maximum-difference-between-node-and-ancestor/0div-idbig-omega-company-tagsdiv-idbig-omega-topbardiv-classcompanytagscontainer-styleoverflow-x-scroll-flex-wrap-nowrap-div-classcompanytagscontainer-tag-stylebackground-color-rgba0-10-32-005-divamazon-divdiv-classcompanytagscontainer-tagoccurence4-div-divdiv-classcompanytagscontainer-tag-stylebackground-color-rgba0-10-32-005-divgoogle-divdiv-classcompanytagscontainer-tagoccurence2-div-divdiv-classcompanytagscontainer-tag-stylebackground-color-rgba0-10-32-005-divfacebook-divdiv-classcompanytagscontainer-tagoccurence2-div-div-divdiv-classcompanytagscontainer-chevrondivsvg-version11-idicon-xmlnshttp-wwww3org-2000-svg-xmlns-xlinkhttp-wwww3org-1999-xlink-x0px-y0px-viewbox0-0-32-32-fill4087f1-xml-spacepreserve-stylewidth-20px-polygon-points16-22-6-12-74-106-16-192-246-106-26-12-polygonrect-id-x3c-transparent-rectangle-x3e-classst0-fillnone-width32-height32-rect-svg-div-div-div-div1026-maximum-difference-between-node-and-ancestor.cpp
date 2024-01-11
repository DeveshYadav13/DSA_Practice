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
    pair<int, int> maxV(TreeNode* root, int &ans) {
        if(root == NULL) return {INT_MAX, INT_MIN};
        auto leftSide = maxV(root -> left, ans);
        auto rightSide = maxV(root -> right, ans);
        auto smallNo = min(min(leftSide.first, rightSide.first), root -> val);
        auto largeNo = max(max(leftSide.second, rightSide.second), root -> val);
        ans = max(ans, max(abs(root -> val - smallNo), abs(root -> val - largeNo)));
        return {smallNo, largeNo};
    }

    int maxAncestorDiff(TreeNode* root) {
        int ans = 0;
        auto currPair = maxV(root, ans);
        auto currMax = max(abs(root -> val - currPair.first) , abs(root -> val - currPair.second));
        return max(ans, currMax);
    }
};