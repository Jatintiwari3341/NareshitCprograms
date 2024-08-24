#include<stdio.h>
int main(){
    int a[100][100],nr,nc,r,c,e,o,z;
    printf("enter the no of rows and coloms");
    scanf("%d %d",&nr,&nc);
    printf("enter %d integers\n",nr*nc);
    for(r=0;r<nr;r++)
    for(c=0;c<nc;c++)
    scanf("%d",&a[r][c]);
    printf("\t Even\tOdd\tZero\n");
    printf("--------------------------------------\n");
    for(r=0;r<nr;r++){
        for(e=z=o=c=0;c<nc;c++){
            if(a[r][c]==0)z++;
            else if(a[r][c]%2==0)e++;
            else o++;

        }
        printf("%d-rows\t %d\t%d\t%d\t\n",r+1,e,o,z);
    }

}