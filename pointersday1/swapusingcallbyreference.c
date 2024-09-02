#include<stdio.h>
void swap(int *a,int *b,int *c){
    int d=*a;
    *a=*c;
    *c=*b;
    *b=d;
}
void main(){
    int a=5,b=6,c=7;
    int *x=&a,*y=&b,*z=&c;
    printf("before swaping value: \na=%d\nb=%d\nc=%d\n",a,b,c);
    swap(x,y,z); 
     printf("after swaping value: \na=%d\nb=%d\nc=%d\n",a,b,c);
}