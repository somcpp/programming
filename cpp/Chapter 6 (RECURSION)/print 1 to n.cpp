#include<iostream>  //IMP 
using namespace std;
void print(int n){
    if (n==0)return;
    print(n-1);//call 3
    cout<<n<<endl;//work
    
}
int main(){
    print(3);
}