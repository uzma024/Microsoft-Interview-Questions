
void helper(int A, int open, int close, string s, vector<string> &ans){
    if(open==A && close ==A){
        ans.push_back(s);
        return;
    }
    if(open<A){
        helper(A,open+1,close,s+"(",ans);
    }
    if(close<open){
        helper(A,open,close+1,s+")",ans);
    }
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> ans;
    helper(A,0,0,"",ans);
    return ans;
}
