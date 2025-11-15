#include<iostream>
using namespace std;
//Q.Maximum Sum Subarray of size k
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    
    int i = 1;
    int j = k;
    int prevsum = 10;
    int maxidx = 0;
    int maxsum = prevsum;
    while(j<n){
        int currsum = prevsum +arr[j] - arr[i-1];
        if(maxsum<currsum){
            maxsum = currsum;
            maxidx = i;
        }
        prevsum = currsum;
        i++;
        j++;
    }
    cout<<maxsum<<endl;
    cout<<maxidx;
}