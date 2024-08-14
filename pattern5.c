








#include<stdio.h>
 int main(){
    int n,r,c,k;
   
    printf("Enter the number");
   scanf("%d",&n);

 for(r=1;r<=n;r++){
   for(c=1;c<=r;c++){
       printf("%3d",c);
   }
   for(k=r-1;k>=1;k--){
       printf("%3d",k);
   }
   printf("\n");
 }
 }