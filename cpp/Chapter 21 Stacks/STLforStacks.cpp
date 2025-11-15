#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;

    // TO PRINT THE ELEMENTS IN STACK

    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    
    while(temp.size()>0){
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    
}