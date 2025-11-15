#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "raghav a is a maths a teacher";
    stringstream ss(str);
    string temp;
    vector<string> v;
    string arr[1];
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int count = 1;
    int maxcount = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i]==v[i+1]){
            count++;
        }
        else count = 1;
        if(maxcount<count){
            maxcount=count;
            arr[0]=v[i];
        }
    }
    cout<<arr[0]<<" "<<"comes "<<maxcount<<" no. of times.";
}