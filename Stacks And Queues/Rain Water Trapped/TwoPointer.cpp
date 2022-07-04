int Solution::trap(const vector<int> &A) {
    int P1 =0, P2=A.size()-1;
        int total=0,maxLeft =0, maxRight=0;
        
        while(P1<P2){
            if(A[P1]<A[P2] ){
                if(A[P1]>=maxLeft){
                    maxLeft= A[P1];
                }else{
                    total+= (maxLeft-A[P1]);
                }
                
                P1++;
            }else{
                if(A[P2]>=maxRight){
                    maxRight= A[P2];
                }else{
                    total+= maxRight-A[P2];
                }
                P2--;
            }
            
        }
        return total;
}
