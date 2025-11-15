#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "defdefdefabcabc";
    string goal = "defdefabcabcdef";
     int i = 0;
        int n = s.size();
        while(s[0]!=goal[i]){
            i++;
        }
        int k = 0;
        int m = i;
        for(int j=0;j<n;j++){
            if(m==n) m = 0;
            if(s[k]!=goal[m]){
                cout<<s[k]<<" "<<goal[m]<<endl<<"False";
                return false;
            } 
            k++;
            m++;
        }
        cout<<"True";
        return true;
}