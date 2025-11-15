#include<iostream>
#include<vector>
using namespace std;
//     void rotate(vector<vector<int>>& matrix) {
//     int n = matrix.size();
    
//     int k = (n - 1) ;
//     for (int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             matrix[i][j] = matrix[k][i];
//             k--;
//         }
        
//     }
//     for(int i=0; i<n; i++){
//         for(int j=1; j<n; j++){
//             cout<<matrix[i][j];
//         }
//     }
//     cout<<endl;
// }
    
int main(){
    
    int v[3][3]{1,2,3,4,5,6,7,8,9};
    int a[3][3];
   for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
     
     
    
    
    for (int i=0; i<3; i++){
        int k = 3 ;
        for(int j=0; j<3; j++){
            
            k--;
            a[i][j] = v[k][i];
            
        }
        
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    

     
}