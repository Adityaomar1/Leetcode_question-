/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:  
    TreeNode* ans = 0;
    void fun(TreeNode* node,TreeNode* p, TreeNode* q){
        if(node == NULL) return;
        if(node == p || node == q) ans = node;
        if(node->val < p->val && node->val < q->val) fun(node->right,p,q);
        else if(node->val > p->val && node->val > q->val) fun(node->left,p,q);
        else ans = node;

        return;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        fun(root,p,q);
        return ans;
    }
};