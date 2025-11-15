#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;
    v.push_back(6);
    v.push_back(10);
    v.push_back(6);
    v.push_back(9);
    v.push_back(6);
    v.push_back(0);
    int x=-1;
    int y=6;
    for(int i=0;i<=5;i++){
        if(v.at(i)==y){
            x=i;
        }
    }
    cout<<x;
}