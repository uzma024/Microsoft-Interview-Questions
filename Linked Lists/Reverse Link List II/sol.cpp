ListNode* rotateNode(ListNode*x,ListNode*y){
    ListNode* p=NULL, *c=x, *n=x->next;
    while(p!=y){
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL) n=n->next;
    }
    return p;
}

ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    if(B==C) return A;
    
    ListNode*d=new ListNode(-1);
    d->next=A;
    
    ListNode *f=d, *s;
    while(B>1){
        B--; C--;
        f=f->next;
    }
    s=f;
    while(C){
        C--;
        s=s->next;
    }
    ListNode*x=f->next,*z=s->next;
    f->next=rotateNode(x,s);
    x->next=z;
    
    return d->next;
}
