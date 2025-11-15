#include<iostream>
using namespace std;
void permut(string str,string ans){
    if(str==""){
        cout<<ans<<endl;
        return;
    }
    
    for(int i = 0;i<str.length();i++){
        char ch=str[i];
        string n = str.substr(0,i) + str.substr(i+1);
        permut(n,ans+ch);
    }
}
int main(){
      string str = "123";
      permut(str,"");
}