#include<iostream>
#include<stack>
#include<string>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int solve(int val1,int val2,int ch){
    if(ch=='+') return val1 + val2;
    else if(ch=='-') return val1 - val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "2+6*4/8-3";
    cout<<s<<endl;
    stack<string> val;
    stack<char> op;
    for(int i =0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                string ans = solve(val1,val2,s[i]);
                }
            
            
    }
    while(op.size()>0){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
}