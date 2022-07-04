string Solution::simplifyPath(string A) {
    stack <string> s;
    for(int i=0;i<A.size();i++){
        while(A[i]=='/')i++;
        
        string t="";
        
        if(i+1<A.size() && A[i]=='.' && A[i+1]=='.' && !s.empty()){
            s.pop();
        }else if(A[i]!='.'){
            while(i<A.size() && A[i]!='/'){
              t.push_back(A[i]);
              i++;  
            }
            if(t!=""){
                s.push(t);
            }
        }
    }
    string temp="";
    
    if(s.empty())return "/";
    
    while(!s.empty()){  
        string p=s.top();
        s.pop();
        reverse(p.begin() , p.end());
        p.push_back('/');
        temp+=p;
    }
    reverse(temp.begin() , temp.end());
    
    return temp;
}
