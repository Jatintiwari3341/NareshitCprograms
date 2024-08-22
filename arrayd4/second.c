/*Write a C program that prints the elements of a given array in a specific format. The program should take an array as input and display the array elements in pairs, with each pair consisting of the first and last elements, followed by the second and second-to-last elements, and so on. If the array has an odd number of elements, the middle element should be printed alone.


For example, given the array: [2, 5, 1, 6, 7, 9, 8, 3], the expected output should be:


2 3

5 8

1 9

6 7

*/

#include<stdio.h>
int main(){
    int a[100],i,j,n;
    printf("enter the size 1-100");
    scanf("%d",&n);
    printf("Enter the %d integers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(n%2==0){
        for(i=0;i<n/2;i++)
        printf("[%d %d]\n",a[i],a[n-1-i]);
    }
    else{
        if(i!=n-1-i)
        {
             for(i=0;i<(n/2)+1;i++)
        printf("[%d %d]\n",a[i],a[n-1-i]);
            
        }
        else
        {
            printf("%d",a[i]);
        }
    }
    
    
}