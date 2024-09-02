#include<stdio.h>
int main(){
    int a,b,*p=&a,*q=&b;
    printf("enter the two numbers");
    scanf("%d %d",&a,&b);

    // puts(*p>*q?"a is big":*q>*p?"b is big":"both are equal");

    if(*p>*q){
        printf("%d is maximum",*p);
    }
    else if(*q>*p){
        printf("%d is maximum",*q);
    }
    else{
        printf("both are equal");
    }
}