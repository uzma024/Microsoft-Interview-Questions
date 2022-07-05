void helper(vector <int> &A,int n,vector <int>&found,vector <int> &temp,vector<vector<int> > &ans){
    if(temp.size()==n){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<n;i++){
        if(found[i]==0){
            temp.push_back(A[i]);
            found[i]=1;
            
            helper(A,n,found,temp,ans);
            
            temp.pop_back();
            found[i]=0;
        }
    }
    return;
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    int n=A.size();
    vector <int> found(n,0);
    vector <int> temp;
    vector<vector<int> > ans;
    helper(A,n,found,temp,ans);
    return ans;
}
