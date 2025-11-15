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
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
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
    void insertAtIdx(int idx,int val){
        if(idx<0 or idx>size) cout<<"Invalid Index"<<endl;
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void getAtIdx(int idx){
        if(idx<0 || idx>size) cout<<"invalid case";
        else if(idx==0) cout<<head->val;
        else if(idx==size-1) cout<<tail->val;
        else{
            Node* temp = head;
            for(int i = 1; i<=idx ;i++){
                temp = temp->next;
            }
            cout<<temp->val<<" "<<endl;
        } 
    }
    void deleteAtHead(){
        if(size==0) cout<<"list is empty";
        else if(size>=1){
            head = head->next;
            size--;
        }
    }
    void deleteAtTail(){
        if(size==0) cout<<"list is empty";
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(size==0) deleteAtHead();
        else if(size==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i = 1; i<idx; i++){
                temp = temp->next;
            }
            temp->next = (temp->next)->next;
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
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtHead(0);
    ll.display();
    ll.insertAtEnd(20);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.insertAtEnd(60);
    ll.display();
    ll.insertAtIdx(2,80);
    ll.display();
    ll.getAtIdx(2);
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(3);
    ll.display();
}