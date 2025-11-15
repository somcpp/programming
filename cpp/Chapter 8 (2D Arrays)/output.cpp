#include<iostream>
using namespace std;
int main(){
    // int arr[2][3];
    // cout<<"enter the data: ";
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }
        int arr[2][3];
    cout<<"enter the data: ";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<3;j++){
        for(int i=0;i<2;i++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}