#include<iostream>
using namespace std;
void hanoi(int n,char start, char helper, char dest){
    if(n==0) return;
    hanoi(n-1,start,dest,helper);
    cout<<start<<"->"<<dest<<endl;
    hanoi(n-1,helper,start,dest);
}
int main(){
    int n=3;
    hanoi(n,'A','B','C');
}