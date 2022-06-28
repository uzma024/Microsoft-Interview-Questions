/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int countA=0,countB=0;
    
    ListNode* itr=A;
    while(itr!=NULL){
        countA++;
        itr=itr->next;
    }
    
    itr=B;
    while(itr!=NULL){
        countB++;
        itr=itr->next;
    }
    
    int diff=countA-countB;
    
    
    itr=A;
    ListNode* itr1=B;
    if(diff>0){
        diff=abs(diff);
        while(diff--){
            itr=itr->next;
        }
    }else{
        diff=abs(diff);
        while(diff--){
            itr1=itr1->next;
        }
    }
    while(itr!=NULL && itr1!=NULL){
        if(itr==itr1)return itr;
        itr=itr->next;
        itr1=itr1->next;
    }
    return NULL;
}
