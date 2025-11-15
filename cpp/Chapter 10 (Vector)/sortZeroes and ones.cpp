#include<iostream>
#include<vector>
using namespace std;
// void sort01(vector<int>& v){
//     int n = v.size();
//     int noo = 0;
//     int noz = 0;
//     for(int i=0; i<n ; i++){
//         if(v[i]==o) noz++;
//         else noo++;
//     }
//     for(int i = 0; i<n ; i++){
//         if (i<noz) v[i] = 0;
//         else v[i] = 1;
//     }
// }

void display(vector<int>& a){
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
//TWO POINTERS  (PENDING)