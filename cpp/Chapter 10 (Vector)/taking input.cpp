#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int>& a){
    a[0]=100;
}
int main(){
    vector<int> v;
    int x;
    for(int i=0;i<5;i++){
        
        cin>>x;
        v.push_back(x);
    }  
    change(v);
    for (int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    
    for(int i=0 ; i<5 ; i++){
    cout<<v.at(i)<<" ";
    
    
    }
}