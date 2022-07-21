
void helper(map <int,int> m, vector <int> temp, set <vector <int>> &s){
    sort(temp.begin(),temp.end());
    s.insert(temp);
    for (auto i:m){
        if(i.second>0){
            temp.push_back(i.first);
            m[i.first]--;
            helper(m,temp,s);
            
            temp.pop_back();
            // m[i.first]++;
        }
    }
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    map <int,int> m;
    for(auto i:A){
        m[i]++;
    }
    set <vector <int>> s;
    vector <int> temp;
    helper(m,temp,s);
    
    vector <vector <int>> ans;
    for (auto i:s){
        ans.push_back(i);
    }
    return ans;
}
