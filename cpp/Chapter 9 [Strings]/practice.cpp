#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//PRINT THE CHARACTER OCCURING MOST

//METHOD 1:

// int main(){
//     string s;
//     cin>>s;
//     int n = s.size();
//     int max = 0;
//     string y[1];
//     for(int i = 0;i<n-1;i++){
//         int count = 0;
//         for(int j = i; j<n; j++){
//             if(s[i]==s[j]){
//                 count++;
//             }

//         }
//         if(count>max){
//             y[0]=s[i];
//             max = count;
//         }
//     }
//     cout<<y[0]<<" has come "<<max<<" no. of times.";
// }

//METHOD 2: //doubt

string s = "leetcode";
vector<int> arr(26,0);
for(int i = 0; i<s.length(); i++){
    char ch = s[i];
    int ascii = (int)ch;
    arr[ascii - 97]++;
}
int mx = 0;
for(int i=0;i<26)