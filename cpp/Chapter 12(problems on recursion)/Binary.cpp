#include<iostream>
#include<string>
using namespace std;
int n = 6;
void generate(string s){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    if(s.length()==0 or s[s.length()-1]== '0'  ){
        generate(s+'0'); 
        generate(s+'1');  
    }
    else if(s[s.length()-1]=='1'){
        generate(s+'0');
    }
    
    
}
int main(){
    generate("");
}