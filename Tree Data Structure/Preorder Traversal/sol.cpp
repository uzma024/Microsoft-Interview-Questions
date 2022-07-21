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
    v.push_back(A->val);
    helper(A->left,v);
    helper(A->right,v);
} 

vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> v;
    helper(A,v);
    return v;
}
