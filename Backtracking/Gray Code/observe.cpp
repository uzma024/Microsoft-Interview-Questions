vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector <int>ans;
    long long x = 1<<A;
    for(int i=0 ; i < x ; i++){
        int j = i/2;
        ans.push_back(i^j);
    }
    return ans;
}
