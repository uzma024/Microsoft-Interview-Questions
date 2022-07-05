

void helper(vector <int>  &A, map <int,int> &m, int n, vector<int> &per,vector<vector<int>>&ans){
    if(per.size()==n){
        ans.push_back(per);
        return;
    }
    
    for(auto i:m){
        // cout<<i.first<<":"<<i.second<<" ";
        if(i.second >0){
            per.push_back(i.first);
            m[i.first]--;
            helper(A,m,n,per,ans);
            
            per.pop_back();
            m[i.first]++;
        }
    }
    return;
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    int n=A.size();
    vector<vector<int>>  ans;
    
    map <int,int>m;
    
    for(auto i:A){
        if(m.find(i)==m.end())m[i]=1;
        else m[i]++;
    }
    // for(auto i:m){
    //     cout<<i.first<<":"<<i.second<<" ";
    // }
    vector <int> per;
    helper(A,m,n,per,ans);
    
    return ans;
}
