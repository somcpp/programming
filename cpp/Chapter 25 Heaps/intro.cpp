#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq; //maxHeap
    pq.push(10);
    pq.push(2);
    pq.push(20);
    pq.push(30);

    //push -> O(log n)
    //pop -> O(log n)

    priority_queue<int, vector<int>, greater<int>> minHeap;
}