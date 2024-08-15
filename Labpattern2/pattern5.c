
    /* 0

    0 1 

    0 1 1

    0 1 1 2

    0 1 1 2 3
*/



#include<stdio.h>
int main(){
    int n,r,c;
    printf("enter the number");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        int a=0,b=1,c2;
        for(c=1;c<=r;c++){
            printf("%3d",a);
            c2=a+b;
            a=b;
            b=c2;
        }
        printf("\n");
    }
}