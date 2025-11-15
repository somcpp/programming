#include<iostream>
using namespace std;
int main(){
    //  char str[5] = {'a', 'b', 'c','d', 'e'};
    //  for(int i = 0; i<5;i++){
    //     cout<<str[i]<<" ";
    //  }
     char st[] = {'a', 'b', 'c','d', 'e' ,'f','\0'};
     cout<<st<<endl<<endl;
     for(int i = 0; st[i]!='\0';i++){
        cout<<st[i]<<" ";
     }
}