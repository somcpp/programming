#include<iostream>
using namespace std;
class cricketer{
public:
    string name;
    int runs;
    int avg;
    cricketer(string name, int runs,int avg){
        this->name= name;
        this->runs = runs;
        this->avg = avg;
    }
void display(){
    cout<<name<<" "<<runs<<endl;
}
int matches(){
    return runs/avg;
}
};

int main(){
    cricketer c1("Virat kohli",25000,59);
    cricketer c2("Rohit Sharma",18000,35);
    c1.display();
    c2.display();
    cout<<c1.matches()<<endl;
}