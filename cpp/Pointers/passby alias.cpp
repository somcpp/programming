//pass by a allias int &a and int &b
#include<iostream>
using namespace std;
int main(){
     int x = 7;
     int* ptr = &x;
     cout<<ptr<<endl;
     ptr = ptr + 1;
     cout<<ptr;
}