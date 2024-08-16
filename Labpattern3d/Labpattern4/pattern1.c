/*

   1 2 3 4 5

   0 3 4 5 6

   0 0 5 6 7

   0 0 0 7 8

   0 0 0 0 9
*/






#include<stdio.h>
int main(){
    int n,r,c;
    printf("Enter the number");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){
            if(r>c){
                printf("0");
            }
            else{
                printf("%d",(r+c)-1);
            }
        }
        printf("\n");
    }
}