#include<stdio.h>
int  swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    printf("Before swapping value %d %d",a,b);
    swap(&a,&b);
    printf("After  swapping value %d %d",a,b);
}