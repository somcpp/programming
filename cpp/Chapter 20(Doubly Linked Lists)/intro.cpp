#include<iostream>
using namespace std;
class Node{ //user defined data type
public: 
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
}
void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
void displayrev(Node* tail){
    if(tail == NULL) return;
    cout<<tail->val<<" ";
    displayrev(tail->prev);
}
void insertAtHead(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else{
        temp->next = head;
        head = temp;
    }
    size++;
}
void insertAtTail(int val){
    Node* temp = new Node(val);
    
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    displayrec(a);
    cout<<endl;
    displayrev(e);
}