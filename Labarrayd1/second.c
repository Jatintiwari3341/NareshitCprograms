/*rite a program in C to read n number of values in an array and display it in reverse order.

Input the number of elements to store in the array :3

Input 3 number of elements in the array :

element - 0 : 2

element - 1 : 5

element - 2 : 7

Expected Output :

The values store into the array are :

2 5 7

The values store into the array in reverse are :

7 5 2




*/
#include<stdio.h>
 int main(){
     int a[100],i,n;
     printf("enter the size of array\n");
   // for(i=0;i<=n;i++){
        scanf("%d",&n);
        printf("enter %d  elements",n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);}
printf("elemets are");
            for(i=n-1;i>=0;i--){
                printf("%3d",a[i]);}
            
        
        
    
 }