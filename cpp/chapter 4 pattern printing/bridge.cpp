#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no. of rows: ";
    cin>>n;
    int m=n+1;
   
    for(int i=1; i<m;i++){
         int x=1;
        for (int j=1;j<=m-i;j++){
            cout<<x<<" ";
             x++;
        }
        
        for(int k=0;k<i-1;k++){
            cout<<"    ";
            x++;
        }
         for (int j=1;j<=m-i;j++){
            
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}