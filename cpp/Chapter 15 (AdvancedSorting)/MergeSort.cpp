#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v, vector<int>& u,vector<int>& a){
    
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<v.size() and j<u.size()){
        if(v[i]<u[j]){
            a[k++] = v[i++]; 
        }
        else a[k++] = u[j++];
    }
     // Copy remaining elements of v, if any
    while (i < v.size()) {
        a[k++] = v[i++];
    }
    // Copy remaining elements of u, if any
    while (j < u.size()) {
        a[k++] = u[j++];
    }
}
void mergesort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2 , n2 = n - n/2;
    vector<int> a(n1), b(n2);
    for(int i = 0; i<n1;i++){
        a[i] = v[i];
    }
    for(int i = 0; i<n2;i++){
        b[i] = v[i+n1];
    }
    mergesort(a);
    mergesort(b);

    merge(a,b,v);
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(9);
    v.push_back(4);
    v.push_back(3);
    v.push_back(6);
    v.push_back(5);
    v.push_back(1);
    v.push_back(8);
    
    mergesort(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}