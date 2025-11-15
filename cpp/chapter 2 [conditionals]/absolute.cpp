#include<iostream>
using namespace std;
int main(){
//     int n;
//     cout<<"enter no. :";
//     cin>>n;
//    if (n<0) n=-n;
//    cout<<n;
// }
// int n , a;
// cout<<"enter the cp:";
// cin>>n;
// cout<<"enter sp:";
// cin>>a;
// if (a>n) cout<<"profit of "<<a-n<<;
// if(a<n) cout<<"loss of "<<n-a;
// if (a==n)cout<<"no profit , no loss";
// }
// int a,b,c;
// cin>>a;
// cin>>b;
// cin>>c;
// if (a>b and a>c) cout<<"a is the graatest";
// else if (b>c and b>a) cout<<"b is the greatest";
// else cout<<"c is the greatest";
// int n;
// cout<<"enter score";
// cin n;
// if(n=<100 and n=>81){cout<<"very good"};
// jj
int x,y;
cout<<"enter x coordinate: ";
cin>>x;
cout<<"enter y coordinate: ";
cin>>y;
if (x>0){if(y>0)cout<<"first quadrant";
        if (y<0)cout<<"fourth quadrant";
        else cout<<"x axis";}
else if(x<0){if(y>0)cout<<"second quadrant";
        if (y<0)cout<<"third quadrant";
        else cout<<"x axis";}
else if(x==0){if(y==0)cout<<"origin";
else cout<<"y axis";}
      
}

