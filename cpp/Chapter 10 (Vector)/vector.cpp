//it is the replacement of array
// size of vector can be changed.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main(){
     vector<int> v;  //dont need to mention the size
     v.push_back(6);
     v.push_back(0);
     v.push_back(8);
     v.push_back(5);
     display(v);
     v.pop_back()
     cout<<v[0];

}