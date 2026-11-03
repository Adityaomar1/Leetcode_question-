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
    TreeNode* ans = 0;
    void fun(TreeNode* node,int val){
        if(node == NULL) return;
        if(node->val == val) ans = node;
        if(node->val > val) fun(node->left,val);
        if(node->val < val) fun(node->right,val);
        return; 
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        fun(root,val);
        return ans;
    }
};