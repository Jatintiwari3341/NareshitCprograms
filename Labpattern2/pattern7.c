/*

    A 

    B A

    C B A

    D C B A

    E D C B A

*/
#include<stdio.h>
int main(){
    int n,r,c;
    printf("enter the number");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=r;c>=1;c--){
            printf("%3c",c+64);
     
        }
        printf("\n");
    }
}