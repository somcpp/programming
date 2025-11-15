#include<iostream>   
#include<stack>
using namespace std;
int main(){   //REMARKS: EXCELLENT WORK!!! 
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    int span[n];
    stack<int> st;
    span[0] = 1;
    st.push(0);
    for(int i = 1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<arr[i]){
            st.pop();
        }
        span[i] = i - st.top();
        st.push(i);
    }
    for(int i = 0;i<n;i++){
        cout<<span[i]<<" ";
    }
}