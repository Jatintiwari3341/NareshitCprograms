#include<stdio.h>
int main(){
    int a[100][100],n,r,c,nr,nc;
    printf("enter the row and colums");
    scanf("%d%d",&nr,&nc);
    printf("elements %d integers",nr*nc);
    for(r=0;r<nr;r++)
    for(c=0;c<nc;c++)
    scanf("%d",&a[r][c]);
    
    printf("elements are\n");
    
    
    for(r=0;r<nr;r++){
    for(c=0;c<nc;c++){
    printf("%6d",a[r][c]);}
    printf("\n");
    }
}