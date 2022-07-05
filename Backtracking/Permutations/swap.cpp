

void helper(vector <int> A,int n,int start,vector<vector<int> > &ans){
    if(start==n-1){
        ans.push_back(A);
        return;
    }
    for(int i=start;i<n;i++){
        swap(A[i],A[start]);
        helper(A,n,start+1,ans);
        swap(A[i],A[start]);
    }
    return;
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    int n=A.size();
    vector<vector<int> > ans;
    
    helper(A,n,0,ans);
    return ans;
}
