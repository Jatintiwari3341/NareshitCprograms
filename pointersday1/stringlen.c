#include<stdio.h>
int main(){
    char s[100],*p;
    printf("enter the string");
    gets(s);
    p=s;
    for( ;*p;p++);
    printf("Length =%d",p-s);
}