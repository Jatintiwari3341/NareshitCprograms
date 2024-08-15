/*
 1

    2  6

    3  7  10

    4  8  11  13

    5  9  12  14  15
*/

#include<stdio.h>
int main(){
    int n,r,c;
    printf("enter the number");
    scanf("%d",&n);
        for(r=1;r<=n;r++){
            int num=r;
            for(c=1;c<=r;c++){
                printf("%3d",num);
                num+=n-c;

            }
            printf("\n");
        }
        

}