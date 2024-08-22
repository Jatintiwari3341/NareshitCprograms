/*Write a C program that rearranges the elements of a given array by moving all the zeros to the front. The program should take an array as input and swap the positions of non-zero elements with zeros, such that all the zeros appear at the beginning of the array, while maintaining the relative order of non-zero elements.


For example: 

given the input array: [1, 0, 2, 0, 4, 5, 0, 3, 0]

Expected output:

1 2 4 5 3 0 0 0 0

*/
#include<stdio.h>
int main(){
    int a[100],n,r,c,i,t,k=0;
    printf("enter the size of arrays 1-100");
    scanf("%d",&n);
    printf("Enter %d integers",n);
    for(r=0;r<n;r++)
    {
        scanf("%d",&a[r]);
    }
    
    
    
        for(r=0;r<n;r++)
        {
            if(a[r]!=0){
                t=a[r];
                a[r]=a[k];;
                a[k]=t;
                k++;
            }
        }
            for( r=0;r<n;r++)    
            {
                printf("%d",a[r]);
            }
     
    
}