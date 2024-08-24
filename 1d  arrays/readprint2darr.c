#include<stdio.h>
int main(){
    int  a[100][100],n,r,c,nr,nc;
    printf("enter the no of row and colums ");
    scanf("%d %d",&nr,&nc);
    printf("Enter the %d Integers",nr*nc);
    for(r=0;r<nr;r++)
        for(c=0;c<nc;c++)
            scanf("%d",&a[r][c]);
            printf("elemets are\n");
            for(r=0;r<nr;r++){
                for(c=0;c<nc;c++){
                    printf("%3d",a[r][c]);
                }
                printf("\n");
            }
      
}