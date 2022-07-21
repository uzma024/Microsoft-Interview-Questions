/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void dfs(TreeNode* A,int &ans,int num){
    if(!A){
        ans=max(ans,num);
        return;
    }
    dfs(A->left,ans,num+1);
    dfs(A->right,ans,num+1);
}

int Solution::maxDepth(TreeNode* A) {
    int ans=0;
    dfs(A,ans,0);
    return ans;
}
