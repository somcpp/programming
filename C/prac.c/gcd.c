#include<stdio.h>
int gcd(int n1,int n2){
    if(n2==0) return n1;
    else{
        gcd(n2,n1%n2);
    }
}
int main(){
    printf("%d",gcd(36,30));

}