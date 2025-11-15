#include<iostream>
using namespace std;
class cricketer{
public:
    string name;
    int runs;
    int avg;
    
    cricketer(string name, int runs,int avg,int r){
        this->name= name;
        this->runs = runs;
        this->avg = avg;
        s = r;
    }
int get(){
    return s;
}
private:
    float s;
};
void change(cricketer* c){
        (*c).avg = 77.2; //(*c) = c->
    }
int main(){
    cricketer c1("Virat kohli",25000,59,1);
    cout<<c1.get();
    cricketer* c2 = new cricketer("Rohit Sharma",18000,35,2);
    cricketer* p1 = &c1;
    change(&c1);
    cout<<(*p1).runs<<endl<<(*p1).avg<<endl;
    cout<<(*c2).name;
    
}