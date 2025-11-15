#include<iostream>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;
    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int ele){
        if(size==capacity){
            capacity *=2;
            int* arr2 = new int[capacity];
            for(int i = 0;i<size;i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
        
    }
    void print(){
        for(int i = 0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
    }
    private:
        float marks;
};
int main(){
    //int* arr[] = new int[5];
    Vector v1;
    v1.add(10);
    v1.print();
    v1.add(15);
    v1.add(16);
    v1.print();
}