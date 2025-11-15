#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(7);
    q.push(8);

    int n = q.size();
    stack<int> st;
    for(int i = 0;i<n/2;i++){
        int x = q.front();
        q.pop();
        q.push()
    }
}