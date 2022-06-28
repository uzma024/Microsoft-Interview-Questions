/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode* itr=A;
    ListNode* head=A;
    ListNode* prevEnd=NULL;
    
    while(itr!=NULL){
        int count=B;
        ListNode* prev=NULL;
        ListNode* temp=itr;
        
        while(count>0 && itr!=NULL){
            ListNode* next=itr->next;
            itr->next=prev;
            prev=itr;
            itr=next;
            count--;
        }
        
        if(prevEnd!=NULL){
            prevEnd->next=prev;
        }else{
            head=prev;
        }
        prevEnd=temp;
    }
    
    return head;
}
