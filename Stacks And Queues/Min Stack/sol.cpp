int mini;
stack <int> st;

MinStack::MinStack() {
    while(!st.empty())st.pop();
    mini=INT_MAX;
}

void MinStack::push(int x) {
    if(st.empty()){
        st.push(x);
        mini=x;
    }else{
        if(x<mini){
        st.push(2*x - mini);
        mini=x;
        }else{
            st.push(x);
        }
    }
    
}

void MinStack::pop() {
    if(st.empty())return;
    int num=st.top();
    st.pop();
    if(num < mini){
        mini=(2*mini - num);
    }
    // if(st.empty())mini=INT_MAX;
}

int MinStack::top() {
    if(st.empty())return -1;
    if(st.top()<mini)return mini;
    return st.top();
}

int MinStack::getMin() {
    return st.empty()? -1 : mini;
}

