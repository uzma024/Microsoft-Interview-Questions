vector<int> Solution::prevSmaller(vector<int> &A) {
    stack <int> s;
    int n=A.size();
    for(int i=0;i<n;i++){
        while(!s.empty() && A[i]<=s.top())s.pop();
        int x=A[i];
        if(s.empty()){
            A[i]=-1;
        }
        else{
            A[i]=s.top();
        }
        s.push(x);
    }
    return A;
}
