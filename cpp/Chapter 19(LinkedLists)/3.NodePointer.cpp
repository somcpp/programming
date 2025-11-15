#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    // Constructor to initialiNodee the value and set next to NULL
    Node(int x) {
        val = x;
        next = NULL;
    }
};
// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
// }
// int siNodee(Node* head){
//     Node* temp = head;
//     int n = 0;
//     while(temp!=NULL){
//         temp = temp->next;
//         n++;
//     }
// }
void displayrec(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    //display(a);
    displayrec(a);
}