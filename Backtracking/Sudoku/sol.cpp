bool isValid(vector<vector<char> > &A,int row,int col,char c){
    for(int i=0;i<9;i++){
        if(A[i][col]==c)return false;
        if(A[row][i]==c)return false;
        if(A[3*(row/3) + i/3][3*(col/3) + i%3]==c)return false;
    }
    return true;
}

bool sudoko(vector<vector<char> > &A){
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(A[i][j]=='.'){
                for(char n='1';n<='9';n++){
                    if(isValid(A,i,j,n)){
                       A[i][j]= n;
                       if(sudoko(A)){
                           return true;
                       }else{
                           A[i][j]= '.';
                       }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void Solution::solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    sudoko(A);
    
}
