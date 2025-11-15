#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class stack{
public:
    Node* head;
    int size;
    stack(){
        head = NULL;
        size = 0;
    }
};
int main(){

}