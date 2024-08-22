/*Write a C program that modifies a given array in a wave pattern and prints the resulting array. The wave pattern requires that the previous element in the array must be greater than the next element, and the next element must be greater than the previous element.


For example, consider the input array arr = {1, 2, 3, 4, 5}

resulting in the array 2 1 4 3 5.


*/

#include<stdio.h>
int main(){
    int a[100],i,j,n,t;
    printf("enter the size 1-100");
    scanf("%d",&n);
    printf("enter %d integers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(j=0;j<n-1;j+=2){
        int t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
        
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}


#include<stdio.h>
int main(){
    int a[100],i,j,n,t;
    printf("enter the size 1-100");
    scanf("%d",&n);
    printf("enter %d integers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n-1;i+=2){
        int t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
        
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}