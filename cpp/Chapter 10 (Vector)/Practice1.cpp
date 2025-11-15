#include<iostream>
#include<vector>
using namespace std;

int swap(int& a , int& b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a,b;
}
int main(){
    vector<int> v;
    vector<int> a;
    int n,m;
    cout<<"enter the size: ";
    cin>>n>>m;
    cout<<"enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<<"enter the array elements: ";
    for (int i = 0; i < m; i++)
    {
        int q;
        cin>>q;
        a.push_back(q);
    }
    
    int x=m+n;
   vector<int> c;
   
  
    
} 

    
