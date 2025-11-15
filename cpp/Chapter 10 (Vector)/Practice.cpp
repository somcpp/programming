#include<iostream>
#include<vector>
using namespace std;
//TWO SUM
//Q.Find the doublet in the array whose sum is equal to the given value x.


    // 
    // int x,y;
    // cout<<"enter the target: ";
    // cin>>x;
    // cout<<"enter the size: ";
    // cin>>y;
    // cout<<"enter the array elements: ";
    // for(int i =0 ; i<y ; i++){
    //     int q;
    //     cin>>q;
    //     v.push_back(q);
        
    // }
    
    //  for(int i=0; i<y;i++){
    //     for(int j=i+1;j<y;j++){
    //         if (v[i] + v[j]==x){
    //             cout<<i<<" and "<< j<<endl;
    //         }
    //     }
    // }

    //Q. WRITE A PROGRSM TO COPY THE CONTENTS OF ONE ARRAY INTO ANOTHER
    //IN THE REVERSE ORDER.
   // vector<int> v;
    
    // int y;
    // cout<<"enter the size: ";
    // cin>>y;
    // cout<<"enter the array elements: ";
    // for(int i =0 ; i<y ; i++){
    //     int q;
    //     cin>>q;
    //     v.push_back(q);
    // }
    // for(int i=y-1 ; i>=0 ; i--){
    //     cout<<v[i]<<" ";

    // }

void display(vector<int>& a){
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
    void reversepart(int i ,int j,vector<int> &v){
        while(i<=j){
            int temp = v[i];
            v[i]= v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    int main(){
    vector<int> v;
    int y;
    cout<<"enter the size: ";
    cin>>y;
    cout<<"enter the array elements: ";
    for(int i =0 ; i<y ; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int k;
    cout<<"enter target: ";
    cin>>k;
    if (k>y)
    {
        k=k%y;
    }
    
    reversepart(0,y-(k+1),v);
    reversepart(y-k,y-1,v);
    reversepart(0,y-1,v);
    display(v);
}
