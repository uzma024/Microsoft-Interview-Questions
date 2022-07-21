/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void find(TreeNode* A,int &ans,int numTillNow){
    
    if(!A->left && !A->right){
        ans+=sumTillNow;
        ans%=1003;
        sumTillNow=0;
    }
    if(A->left){
        find(A->left,ans,sumTillNow*10+A->left->val);
    }
    if(A->right){
        find(A->left,ans,sumTillNow*10+A->right->val);
    }
    return;
}

int Solution::sumNumbers(TreeNode* A) {
    if(A==NULL)
    {
          return 0;
    }

    int ans =0;

    func(A ,0, ans);

    return ans;
}
