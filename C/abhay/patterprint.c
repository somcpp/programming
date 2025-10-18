#include <stdio.h>
int main() { 
    int n = 7;
    for(int i = 0;i<n;i++){
        for(int j = 65;j<65 + n-i;j++){
            printf("%c ",j);
        }
        for(int k = 1;k<=i;k++){
            printf("    ");
        }
        for(int l = 65 + n-i-1;l>=65;l--){
            if(l==71) printf("  ");
            else{

            printf("%c ",l);
            }
        }
        printf("\n");
    }
}