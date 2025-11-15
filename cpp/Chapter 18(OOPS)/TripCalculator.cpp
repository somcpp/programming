#include<iostream>
#include <string>
using namespace std;
class Friends{
public:
    string name;
    int amount_spent;
};
int main(){
    int n;
    cout<<"Enter the No. of friends: ";
    cin>>n;
    cout<<endl;
    Friends f[n];
    int total_amount = 0;
    for(int i = 0;i<n;i++){
        cout<<"Enter Friend's Name: ";
        cin>>f[i].name;
        cout<<"Enter the amount spent by "<<f[i].name<<": ";
        cin>>f[i].amount_spent;
        total_amount += f[i].amount_spent;
        cout<<endl;
    }
    int average = total_amount/n;
    for(int i = 0;i<n;i++){
        if(f[i].amount_spent<average){
            cout<<f[i].name<<" has to pay "<<average-f[i].amount_spent<<endl;
        }
        else{
            cout<<f[i].name<<" will get "<<f[i].amount_spent - average<<endl;
        }
    }
}