#include<iostream>
#include<stack>
using namespace std;
void removeDuplicates(string s){
    stack<char> st;
    st.push(s[s.length()-1]);
    for(int i =s.length()-2;i>=0;i--){
        if(s[i]!=st.top()){
            st.push(s[i]);
        }
    }
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
}
int main(){
    string s = "aaabbcddaabffg";
    removeDuplicates(s);
}