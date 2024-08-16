/*
1 2 3 4 5

  2 3 4 5 1

  3 4 5 1 2

  4 5 1 2 3

  5 1 2 3 4

*/

#include<stdio.h>
int main(){
    int n,r,c;
    printf("Enter the number");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        int k=r, a=1;
   for(c=1;c<=n;c++){
       if(k<=n){
           printf("%3d",k++);
       }
       else{
           printf("%3d",a++);
       }
       
   }
   printf("\n");
    }
}