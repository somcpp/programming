#include<iostream>
#include<vector>
using namespace std; //n= rows
int main(){          //m = cols
    int n , m;
    cout<<"enter no. of rows: of first matrix: ";
    cin>>n;
    cout<<"enter no. of cols: of first matrix: ";
    cin>>m;
    int a[n][m];
    int b[n][m];
    cout<<"enter the elements of the first matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int minr = 0 , minc =0;
    int maxr = n-1 , maxc = m-1;
    while(minr<=maxr && minc <=maxc){
        //right
        for(int i = minc; i<=maxc; i++){
            cout<<a[minr][i]<<" ";        
        }
        if(minr>maxr or minc >maxc) break;
    minr++;
        //down
        for(int j = minr; j<=maxr; j++){
            cout<<a[j][maxc]<<" ";
        }
        if(minr>maxr or minc >maxc) break;
    maxc--;
        //left
        for(int k=maxc; k>=minc;k--){
            cout<<a[maxr][k]<<" ";
        }
        if(minr>maxr or minc >maxc) break;
    maxr--;
        //up
        for(int l=maxr; l>=maxr;l--){
            cout<<a[l][minc]<<" ";
        }
        if(minr>maxr or minc >maxc) break;
    minc++;

}
}
