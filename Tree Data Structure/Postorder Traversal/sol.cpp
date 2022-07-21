/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void helper(TreeNode* A, vector<int> &v){
    if(!A)return;
    helper(A->left,v);
    helper(A->right,v);
    v.push_back(A->val);
}

vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> po;
    helper(A,po);
    return po;
}
