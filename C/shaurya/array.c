#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}
    // int arr[] = {1, 2,3,10,5,8};
    // int n = sizeof(arr)/sizeof(arr[1]);
    // printf("%d\n",n);
    // for(int i = 0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }

    //max

    // int max = -1;
    // for(int i = 0;i<n;i++){
    //     if(max<arr[i]){
    //         max = arr[i];
    //     }
    // }

//     int target = 10;
//     for(int i = 0;i<n;i++){
//         if(arr[i]==target){
//             printf("%d",i);
//         }
//     }

//         printf("%d ",min);

// }