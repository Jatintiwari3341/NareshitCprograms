/*
1

    2  3

    3  4  5

    4  5  6  7

    5  6  7  8  9
*/

#include<stdio.h>
int main(){
    int n,r,c;
    printf("Enter the numbers of rows");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        int a=r;
        for(c=1;c<=r;c++){
            printf("%d",a++);
        }
        printf("\n");
    }
}