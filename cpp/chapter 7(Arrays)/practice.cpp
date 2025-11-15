#include<iostream>
using namespace std;
//   int swap(int a , int b){
//         int temp;
//         b = temp;
//         b = a;
//         a = temp;
//         return a,b; 
//     }
int main(){
  
    // int n;
    // cout<<"enter the size: ";
    // cin>>n;
    // int arr[n];
    // cout<<"\nenter the "<< n<<" numbers: ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int sum=0;
    // for(int j=0;j<n;j++){
    //     sum+=arr[j];
    // }
    // cout<<sum;

    // int arr[] = {12,34,4,5,6,7,99,};
    // int n = sizeof(arr)/4;
    // int mx= arr[0];
    // for(int i=1;i<n;i++){
    //     if(arr[i]>mx){
    //         mx=arr[i];
    //     }}int mx2= INT32_MIN ;
    // for(int i=1;i<n;i++){
    //         if(arr[i]==mx)
    //         continue;
    //         mx2= max(mx2,arr[i]);
    // }  cout<<mx2; 
    // } 

    //Q.WRITE A PROGRAM TO COPY THE CONTENTS OF ONE ARRAY INTO ANOTHER
    //IN THE REVERSE ORDER.

    // int a[5]= {1,2,3,4,5};
    
    // int j = -1;
    // for(int i=4;i>=0;i--){ j++;
    //      swap(a[j] , a[i]);
    //       cout<<a[j]<<" ";
    // }
    // int a[6]= {1,2,3,3,2,6};
    // bool flag= true;
    // int j = -1;
    // for(int i=5;i>=3;i--){ j++;
    //      if(a[j] != a[i])
    //       flag = false;
    //     break;
    // }
    // if( flag == false)cout<<"not palindrome";
    // else cout<<"palindrome";
        int a[6]= {1,2,3,3,6,1};
    
    int j = -1;
    for(int i=5;i>=3;i--){ j++;
         if(a[j] != a[i]){
          cout<<"not palindrome";
        break;}
        
    }
}

