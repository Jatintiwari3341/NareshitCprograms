/*Write a program in C to store elements in an array and print it.

Input 10 elements in the array :

element - 0 : 1

element - 1 : 1

element - 2 : 2

element - 3 : 3

element - 4 : 4

element - 5 : 5

element - 6 : 6

element - 7 : 7

element - 8 : 8

element - 9 : 9

.......

and so on.

Expected Output :

Elements in array are: 1 1 2 3 4 5 6 7 8 9


*/


#include<stdio.h>
 int main(){
     int a[100],i,n;
     printf("enter the size of array");
   // for(i=0;i<=n;i++){
        scanf("%d",&n);
        printf("enter %d  elements",n);
        for(i=0;i<n;i++){
            printf("Element-[%d]:",i);
            scanf("%d",&a[i]);}
          
            for(i=0;i<n;i++){
                printf("%3d",a[i]);}
            
        
        
    
 }