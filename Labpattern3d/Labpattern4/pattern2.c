    /*
    1 
    1 * 2

    1 * 2 * 3

    1 * 2 * 3 * 4
*/

#include<stdio.h>
int  main(){
    int n,r,c;
    printf("Enter the number");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        int k=1;
        for(c=1;c<=2*r-1;c++){
            if(c%2==0){
                printf("*");
            }
            else{
                printf("%d",k++);
            }
        
    }
    printf("\n");
    }
}