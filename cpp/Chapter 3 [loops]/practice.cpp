#include <iostream>
using namespace std;

int main() {
//     int x = 4, y = 0;
//     while (x >= 0) {
//         x--;
//         y++;
//         if (x == y)
//             continue;
//         else
//             cout << x << " " << y << endl;
//     }
//     return 0;
// }
    //   int n;
    //   cin>>n;


    int n ;
    cout<<"enter n: ";
    cin>>n;
    
// method one to count digits
    int count=0;
    while(n>0){
        n=n/10;
        count++;
        if(n>1){continue;}
        else{
        cout<<count;}
    }
}


//method 2 :
// int count = 0;
// while (n!=0){
//     n=n/10;
//     count++;
// }
// cout<<count;
// }
// int i=1;
// while(i<=n)//if the condition does not satisfy then stop// 
// {
    
//     i++;
//     cout<<"som";
// }}
