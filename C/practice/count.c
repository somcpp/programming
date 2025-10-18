#include<stdio.h>
#include<string.h>
void sortStrings(char arr[][100],int n){
    char temp[100];
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(strcmp(arr[j],arr[j+1])>0){
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    char arr[n][100];
    for(int i = 0;i<n;i++){
        scanf("%s",arr[i]);
    }
    sortStrings(arr,n);
}