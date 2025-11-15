#include<iostream>
using namespace std;
// int main(){
//     int x=3;
//     int* p = &x;
//     cout<<p<<endl;
//     cout<<*p<<endl<<&p;
// }

void swap(int* a , int* b){
  int temp = *a;
  *a = *b;
  *b= temp;
}
int main(){
    int x= 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    swap(&x ,&y);
    cout<<x<<" "<<y;
}