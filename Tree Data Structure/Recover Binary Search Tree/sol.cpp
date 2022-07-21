/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
vector <int> swapped;

void inorder(TreeNode* A,int &prev) {
    if(A==NULL)return;
    inorder(A->left,prev);
    if(prev!=INT_MIN && prev > A->val){
        swapped.push_back(prev);
        swapped.push_back(A->val);
    }
    prev=A->val;
    inorder(A->right,prev);
}

vector<int> Solution::recoverTree(TreeNode* A) {
    swapped.clear();
    int prev=INT_MIN;
    inorder(A,prev);
    sort(swapped.begin(),swapped.end());
    int n=swapped.size()-1;
    return {swapped[0],swapped[n]};
}
