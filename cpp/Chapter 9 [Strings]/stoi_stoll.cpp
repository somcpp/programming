#include<iostream>
#include<string>
using namespace std;
// int main(){
//     string str = "123456";
//     int x = stoi(str);   //string to integer
//     cout<<x+1;

//     int a = "123456";
//     string s = to_string(a); //integer to string
// }


//Practice

int main(){
    string arr[]= {"0123","045","009645","478","856"};
    int max = stoi(arr[0]);
    string maxs;
    for(int i = 1; i<=4;i++){
        int x = stoi(arr[i]);
        if(x>max){
            max = x;
            maxs= arr[i];
        }
    }
    cout<<maxs;
}