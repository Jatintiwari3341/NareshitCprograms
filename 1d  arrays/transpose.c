#include<stdio.h>
int main(){
    int a[100][100],nr,nc,r,c,e,o,z,n;
    printf("enter the no of rows and colums");
    scanf("%d %d",&nr,&nc);
    printf("Enter %d integers\n ",nr*nc);
    for(r=0;r<nr;r++)
    for(c=0;c<nc;c++)
    scanf("%d",&a[r][c]);
    printf("transpose matrix");
    printf("-------------------\n");
    for(c=0;c<nc;c++){
        for(r=0;r<nr;r++){
            printf("%3d",a[r][c]);
        }
        printf("\n");
        
    }
}