/*Write a program in C to print separately the  odd and even integers 

Test Data :

Input the number of elements to be stored in the array :5

Input 5 elements in the array :

element - 0 : 25

element - 1 : 47

element - 2 : 42

element - 3 : 56

element - 4 : 32

Expected Output :

The Even elements are :

42 56 32

The Odd elements are :

25 47



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
            if(a[i]%2==0){
                printf("even=%d\n",a[i]);
            }
            else{
                printf("odd=%d\n",a[i]);
            }
        }

        
        
    
 }