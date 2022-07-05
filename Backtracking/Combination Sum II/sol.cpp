void helper(vector<int> &A, int i, vector<vector<int>> &ans, vector<int> &temp, int target){
    if(target==0){
        ans.push_back(temp);
        return;
    }
    if(i==A.size())return;
    
    temp.push_back(A[i]);
    helper(A,i+1,ans,temp,target-A[i]);
    
    temp.pop_back();
    helper(A,i+1,ans,temp,target);
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector <vector<int>> ans;
    vector<int> temp;
    sort(A.begin(),A.end());
    helper(A,0,ans,temp,B);
    
    
    // sort(ans.begin(), ans.end());
    ans.resize(distance(ans.begin(), unique(ans.begin(), ans.end())));
    return ans;
}
