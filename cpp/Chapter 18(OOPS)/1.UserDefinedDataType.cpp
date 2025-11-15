#include<iostream>
#include<string>
using namespace std;
class Student{ //Student is a new data type.
    public:
    string name;
    int rno;
    float gpa;
    int age;
    int marks[5];
};
void change(Student& s){
    s.name = "vaibhav";
    s.age = 20;
}
void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<" "<<s.age<<endl;
}
int main(){
    Student s1;
    s1.name = "Raghav Garg";
    s1.rno = 76;
    s1.gpa = 8.2;
    s1.age = 30;
    Student s2;
    s2.name = "som";
    s2.rno = 76;
    s2.gpa = 8.2;
    s2.age = 30;
    change(s1);
    print(s1);
    print(s2);
    return 0;
}