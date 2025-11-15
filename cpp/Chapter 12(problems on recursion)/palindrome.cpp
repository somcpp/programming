#include<iostream>
using namespace std;

//Iiterative method

// bool palindrome(string s){
//     int i = 0;
//     int j = s.length()-1;
//     while(i<j){
//         if(s[i]!=s[j]) return false;
//         i++;
//         j--;
//     }
//     return true;
// }

//Recursive Method
bool palindrome(string s,int i,int j){
    if(s[i]!=s[j]) return false;
    else return palindrome(s,i+1,j-1);
}
int main(){
     string s = "raghav";
     cout<<palindrome(s,0,s.length()-1);
}