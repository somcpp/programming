//PENDING DOUBT
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(string s,string ans,int i,vector<string>& v,bool flag){
     if(s==""){
          v.push_back(ans);
          return;
     }
     char ch = s[i];
     if(s[i]==s[i+1]){
          flag=
     }
     s=s.substr(1);
     if(flag==false){
     subset(s,ans+ch,i+1,v,false);
     
     
     }
     else if(flag==true){
     subset(s,ans+ch,i+1,v,false);
     
     
     subset(s,ans,i+1,v,true);
     }

}
int main(){
     string s = "aab";
     vector<string> v;
     subset(s,"",0,v,true);
     for(int i=0;i<v.size();i++){
          cout<<v[i]<<endl;
     }
}