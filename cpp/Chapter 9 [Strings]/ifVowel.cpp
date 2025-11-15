#include<iostream>
#include<string>
using namespace std;
int main(){
     string s = "raghav";
     int count = 0;
     int i = 0;
     while(s[i]!='\0'){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i] == 'u' or s[i]=='o'  ){
            count++;
        }
        i++;
     }
     cout<<count;
}