#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next= NULL;
    }
};
class Linkedlist{
public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtHead(int x){
        Node* temp = new Node(x);
        if(size==0)head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtEnd(int y){
        Node* temp = new Node(y);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtidx(int idx,int val){
        Node* temp = head;
        if(idx<0 or idx>size) cout<<"invalid case";
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            for(int i = 1;i<idx;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
        }
    }
    
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtHead(0);
    ll.display();
    ll.insertAtEnd(20);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.insertAtEnd(60);
    ll.display();
    ll.insertAtidx(2,80);
    ll.display();
}