/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

void recurse(ListNode* A, ListNode *&B,int &ans){
    if(A==NULL)return;
    recurse(A->next,B,ans);
    
    if(A->val!=B->val){
        ans=0;
    }
    B=B->next;
}

int Solution::lPalin(ListNode* A) {
    ListNode* B=A;
    int ans=1;
    recurse(A,B,ans);
    return ans;
}
