/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    if(A==NULL)return ans;
    
    stack <TreeNode*> st;
    while(A!=NULL){
        st.push(A);
        if(A->left!=NULL){
            A=A->left;
        }else{
            A=st.top();
            st.pop();
            ans.push_back(A->val);
            A=A->right;
            while(A==NULL && !st.empty()){
                A=st.top();
                st.pop();
                ans.push_back(A->val);
                A=A->right;
            }
        }
    }
    return ans;
}
