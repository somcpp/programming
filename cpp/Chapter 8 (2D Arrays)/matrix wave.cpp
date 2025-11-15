#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n , m;
    cout<<"enter no. of rows: of first matrix: ";
    cin>>n;
    cout<<"enter no. of cols: of first matrix: ";
    cin>>m;
    int a[n][m];
    int b[n][m];
    cout<<"enter the elements of the first matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        int k= n-1;
        for(int j = 0; j<m; j++){
            if(i%2 == 0){
                b[i][j] = a[i][j];
            }
            else b[i][j] = a[i][k];
            k--;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}