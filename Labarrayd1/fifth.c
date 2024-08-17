/*Write a C program to store some integers in an array and print all the prime numbers available in that array


Input as :

1 2 3 4 5

Output as :

2 3 5

*/

#include<stdio.h>
 int main(){
     int a[100],i,j,n,c;
     printf("enter the size of array\n");
   // for(i=0;i<=n;i++){
        scanf("%d",&n);
        printf("enter %d  elements",n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        for(c=0,j=1;j<=a[i];j++){
            if(a[i]%j==0)
            c++;
        }
              if(c==2){
                  printf("prime no=%d",a[i]);
              }

        
        }
        }
 