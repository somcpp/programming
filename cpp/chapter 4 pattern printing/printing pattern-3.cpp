#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

//nonsense method

//     for(int i=1;i<=n;i++){if(i==(n+1)/2){
//       for(int k=1;k<=n;k++){
//         cout<<"* ";
//       }
//      }else{
//         for(int j=1;j<=n;j++){
//             if(j==(n+1)/2){
//                 cout<<"* ";}
//                 else cout<<"# ";
//                 }
//              }
//               cout<<endl;
//             }
 
//   }
    
//perfect method

// int mid= (n+1)/2;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//     if (i==mid or j==mid) {
//         cout<<"*  ";
//     }
//     else cout<<"#  ";
// }
// cout<<endl;}}


// for(int i=1;i<=n;i++){
//     for(int j=1;j<=6;j++){
//         if(i==1 or i==n or j==1 or j==6){
//             cout<<"* ";}
//             else cout<<"  ";
//         }cout<<endl;
//     }

//Q.*               *
//   *           *
//     *       *
//       *   *
//         *
//       *   *
//     *       *
//   *           *
// *               *

//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(i==j or j == ((-i) + (n-1))){
//             cout<<"* ";
//         }
//         else cout<<"  ";

//       }
//       cout<<endl;
//    } 

//       *
//     * *
//   * * *
// * * * *

//method 1:

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if((i+j)>4){
//                 cout<<"* ";
//             }
//             else cout<<"  ";
//         }
//         cout<<endl;
//     }

// }

//method 2:

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<"  ";
//     }
//     for(int k=1;k<=i;k++){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }
// }
// Q.PRINT
//            * * * * * * *
//           * * * * * * *
//         * * * * * * *
//       * * * * * * *
//     * * * * * * *
//   * * * * * * *
// * * * * * * *

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=(n-i);j++){
//         cout<<"  ";
//     }
//     for(int k=1;k<=n;k++){
//         cout<<"* ";
//     }
//     cout<<endl;
//  }
// }

for(int i=1;i<=n;i++){
    for(int j=1;j<=(n-i);j++){
        cout<<"  ";
    }
    for(int k=1;k<=n;k++){
        cout<<"* ";
    }
    cout<<endl;
 }
}
