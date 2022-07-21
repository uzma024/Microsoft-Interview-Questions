/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    if(!A)return;
    queue <TreeLinkNode*> q;
    
    q.push(A);
    
    while(!q.empty()){
        int size=q.size();
        TreeLinkNode* prev=NULL;
        
        while(size--){
            TreeLinkNode* curr=q.front();
            q.pop();
            
            curr->next=prev;            
            prev=curr;
            
            if(curr->right)q.push(curr->right);
            if(curr->left)q.push(curr->left);
        }
    }
    
    
}
