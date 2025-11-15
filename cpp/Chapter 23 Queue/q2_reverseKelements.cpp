#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i = 0;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    int k;
    cout<<"enter k: ";
    cin>>k;
    display(q);
    stack<int> st;
    for(int i = 0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i = 0;i<k;i++){
        q.push(st.top());
        st.pop();
    }
    for(int i = 0;i<q.size()-k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
    display(q);
}