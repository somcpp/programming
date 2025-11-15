#include<iostream>
using namespace std;
int main(){

//Q.SUM OF TWO ARRAYS.

    int a[2][3] {9 , 4 , 2, 0, 1, 7};
    int b[2][3] {7 , 5 , 9, 4, 12, 36};
    int c[2][3];
    for(int i=0;i<=1; i++){
        for (int j=0; j<=2;j++){
            
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

//TRANSPOSE OF A MATRIX.

    //     int a[2][3] {9 , 4 , 2, 0, 1, 7};
    
    // for(int i=0;i<=1; i++){
    //     for (int j=0; j<=2;j++){
            
    //        cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    //  for(int i=0;i<=2; i++){
    //     for (int j=0; j<=1;j++){
            
    //        cout<<a[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
}