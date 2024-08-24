#include<stdio.h>
int main(){
    int a[100][100],b[100][100],n,r,c,nr,nc;
    printf("enter the row and colums");
    scanf("%d%d",&nr,&nc);
    printf("elements %d integers\n",nr*nc);
    for(r=0;r<nr;r++){
    for(c=0;c<nc;c++){
     printf("element :[%d][%d] : ",r,c);
    scanf("%d",&a[r][c]);}}
     printf("elements %d integers\n",nr*nc);
    for(r=0;r<nr;r++)
    {
    for(c=0;c<nc;c++)
    {
     printf("element :[%d][%d] : ",r,c);
    scanf("%d",&b[r][c]);
    }
    }
    
    printf("elements of first matrix\n");
    
    for(r=0;r<nr;r++){
    for(c=0;c<nc;c++){
    printf("%6d",a[r][c]);}
    printf("\n");
    }
        printf("\nelements of second matrix\n");
    for(r=0;r<nr;r++){
    for(c=0;c<nc;c++){
    printf("%6d",b[r][c]);}
    printf("\n");
    }
    printf("sum of two matrix is\n");
    for(r=0;r<nr;r++){
    for(c=0;c<nc;c++){
    printf("%6d",a[r][c]-b[r][c]);}
    printf("\n");
    }
}