/*Write a program in C to find the sum of all elements of the array.

Input the number of elements to be stored in the array :3

Input 3 elements in the array :

element - 0 : 2

element - 1 : 5

element - 2 : 8

Expected Output :

Sum of all elements stored in the array is : 15

*/
#include<stdio.h>
 int main(){
     int a[100],i,n,s=0;
     printf("enter the size of array\n");
   // for(i=0;i<=n;i++){
        scanf("%d",&n);
        printf("enter %d  elements",n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            s=s+a[i];
        }
printf("elemets are");
          
                printf("%3d",s);
            
        
        
    
 }