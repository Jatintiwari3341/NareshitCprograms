/*Write a C program to find and print all the missing elements that are not present in a given array. Given an array of integers, your task is to identify and print all the numbers that are missing within a specified range.


For example:

given the input array arr = [1, 4, 7, 12, 17] 

Expected output as : 2 3 5 6 8 9 10 11 13 14 15 16
*/

#include<stdio.h>
int main(){
    int a[100],i,n,k;
    printf("enter the size 1-100");
    scanf("%d",&n);
    printf("enter %d integers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(k=0,i=a[0];i<a[n-1];i++){
        if(a[k]==i){k++;}
        else{
            printf("%3d",i);
        }
    }
  
      
}