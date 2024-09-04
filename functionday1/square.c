#include<stdio.h>
void squ(int *n){
    *n= *n * *n;
}
int main(){
    int n;
    
    printf("enter the number");
    scanf("%d",&n);
    squ(&n);
    printf("the square is %d",n);
}