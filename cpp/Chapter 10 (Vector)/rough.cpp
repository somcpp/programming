#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(4);
    v.push_back(3);
    v.push_back(1);
    vector<int> a=v;
  
    for (int i = 0; i < 4; i++)
    {
       cout<<a[i]<<" ";
    }
    
}