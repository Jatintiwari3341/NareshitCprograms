/*
1  

    2  3

    4  5  6 

    7  8  9 10

   11 12 13

   14 15

   16
*/            

#include<stdio.h>
int main(){
    int n,r,c;
    printf("Enter the number");
    scanf("%d",&n);
     int a=1;
    for(r=1;r<=n;r++){
       
        for(c=1;c<=r;c++){
            printf("%d",a++);
        }
        printf("\n");
    }
      for(r=1;r<=n;r++){
       
        for(c=n-1;c>=r;c--){
            printf("%d",a++);
        }
        printf("\n");
    }
    
    
}