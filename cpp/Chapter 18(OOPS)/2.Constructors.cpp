#include<iostream>
using namespace std;
class Student{ //Student is a new data type.
    public:
    string name;
    int rno;
    float gpa;
    int age;
    int marks[5];
    Student(){ // default constructor

    }
    Student (string s, int r, int g){ // parameterised constructors
        name = s;
        rno = r;
        gpa = g;
    }
};
void change(Student& s){
    s.name = "vaibhav";
}
void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;//<<" "<<s.age<<endl;
}
int main(){
    Student s2("audi",5,4);
    Student s6 = s2;
    Student s1;
    s1.name = "Raghav Garg";
    s1.rno = 76;
    s1.gpa = 8.2;
    s1.age = 30;
    // Student s2;
    // s2.name = "som";
    // s2.rno = 76;
    // s2.gpa = 8.2;
    // s2.age = 30;
    // change(s1);
    print(s1);
    print(s6);
    return 0;
}