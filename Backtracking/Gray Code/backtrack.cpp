vector <string> genrate(int A){
    if(A==1)return {"0","1"};
    
    vector <string> temp,ans;
    temp=genrate(A-1);
    int n=temp.size();
    
    for(int i=0;i<n;i++){
        ans.push_back("0"+temp[i]);
    }
    for(int i=n-1;i>=0;i--){
        ans.push_back("1"+temp[i]);
    }
    return ans;
}

vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector <string> temp= genrate(A);
    vector<int> ans;
    
    for(auto i: temp){
        ans.push_back(stoi(i,0,2));
    }
    
    return ans;
}
