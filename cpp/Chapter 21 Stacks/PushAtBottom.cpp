#include<iostream>
#include<stack>
using namespace std;
// void pushAtAnyindex(stack<int>& st,int val,int idx){
//     stack<int>temp;
//     while(st.size()>idx){
//         temp.push(st.top());
//         st.pop();
//     }
//     st.push(val);
//     while(temp.size()>0){
//         st.push(temp.top());
//         temp.pop();
//     }
// }
void pushAtBottom(stack<int>& st, int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void reverse(stack<int>& st){
    if(st.size()==0){
        return;
    }
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);
}

    void print(stack<int>& st){
        while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // print(st);
    // cout<<endl;
    // pushAtBottom(st,60);
    // print(st);
    // pushAtAnyindex(st,70,2);
    // print(st);
    reverse(st);
    print(st);

}