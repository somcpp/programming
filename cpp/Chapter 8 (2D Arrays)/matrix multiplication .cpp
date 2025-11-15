#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n , m , p, q;
    cout<<"enter no. of rows: of first matrix: ";
    cin>>n;
    cout<<"enter no. of cols: of first matrix: ";
    cin>>m;
    cout<<"enter no. of rows: of second matrix: ";
    cin>>p;
    cout<<"enter no. of cols: of second matrix: ";
    cin>>q;
    if(m!=p){
        cout<<"multiplication can't be done because rows of first matrix is not eqaul to rows of second matrix. ";
        return 0;
    }
    int a[n][m];
    int b[p][q];
    int c[n][q];
    cout<<"enter the elements of the first matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the elements of the second matrix: ";
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>b[i][j];
        }
    }
    for(int i =0 ; i<p; i++){
        for(int k=0; k<q; k++){
        int sum =0;
        for(int j=0; j<p; j++){
            sum += a[i][j] * b[j][k];
        }
        c[i][k] = sum;
    }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<q; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
//done good!

   