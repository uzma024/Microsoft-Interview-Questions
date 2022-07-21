/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void dfs(TreeNode* A, vector <TreeNode*> &v ){
    if(A==nullptr)return;
    v.push_back(A);
    dfs(A->left,v);
    dfs(A->right,v); 
    A->left=nullptr;
    A->right=nullptr;
} 
 
TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector <TreeNode*> v;
    dfs(A,v);
    TreeNode* head=nullptr;
    TreeNode* prev=nullptr;
    
    for(auto i:v){
        if(prev==nullptr){
            head=i;
        }else{
            prev->right=i;
        }
        prev=i;
    }
    return head;
}
