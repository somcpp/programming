#include<iostream>
using namespace std;
int main(){ 
    int n;
    //int x =1;
    cout<<"no. of rows: ";
    cin>>n;
    for(int i=1; i<=n;i++){
        for (int j = 0; j <n-i ; j++)
        {
            
            cout<<"  ";
            
        }
        for (int j = 1; j <=(2*i-1) ; j++)
        {
            int x = j-1;
            if(j>i){
                for(int k=1;k<=i-1;k++){
                x--;
                cout<<x<<" ";
                }
                break;
            }
            else cout<<j<<" ";
            
            
        }
        cout<<endl;
    }    
}