#include<stdio.h>
int main(){
    int new , number , place = 1 , digit;
    scanf("%d",&number);

    while(number > 0){
        digit = number % 10;
        digit = (digit + 1) %10;
        new += digit * place;
        place *= 10;
        number /=10;
    }
}