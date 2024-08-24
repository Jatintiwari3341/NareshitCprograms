/* 1

    1  2

    3  5  8

    13 21 34 55
*/

#include<stdio.h>
int  main(){
    int n,r,c,a=0,b=1,c2;
    printf("Enter the number");
    scanf("%d",&n);
        for(r=1;r<=n;r++){
            for(c=1;c<=r;c++){
                c2=a+b;
                a=b;
                b=c2;
                printf("%3d",a);
            }
            printf("\n");
        }
    }
