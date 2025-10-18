// #include<stdio.h>
// void main(){
//     char a[10];
//     // scanf("%s",a); //a points to the address to the character array
//     gets(a);
//     printf("%s",a[2]); 
// }
#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    char ch[100];

    fgets(ch,sizeof(ch),stdin);
    printf("Enter string");
    // scanf("%s",str);
    fgets(str,sizeof(str),stdin);
    // int n = strlen(str);
    // str[2] = 'm';
    // printf("%s %d",str,n);


    // compare
    int result = strcmp(str,ch);
    if(result==0) printf("strings are equal");
    else if(result<0) printf("%s is bigger",ch);
    else printf("%s is bigger",str);
}