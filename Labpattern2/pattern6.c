
   /*
    0  

    0 1

    0 1 0

    0 1 0 1

    0 1 0 1 0

    0 1 0 1 0 1

    */

#include<stdio.h>
int main(){
    int n,r,c;
    printf("enter the number");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            if(c%2==0){
                printf("1");
            }
                else{
                    printf("0");
                }
                
            }
            printf("\n");
        }
    }

