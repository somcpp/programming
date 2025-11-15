#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
     for (int i=1;i<=x;i++){
        f*=i;
     }

     return f;
    }
    int ncr(int n , int r){
        int a=fact(n);
        int b=fact(n-r);
        int c=fact(r);

        int x=a/(b*c);
        
        return x;
    }

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for( int j=0;j<=n-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}
