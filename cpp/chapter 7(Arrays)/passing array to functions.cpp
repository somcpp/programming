#include<iostream>
using namespace std;
void change(int brr[]){
    brr[0] = 9;
}
int main(){
    int arr[3] = {1,2,3};
    for (int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    for (int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}