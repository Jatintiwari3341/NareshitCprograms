#include<stdio.h>
int largestArray(int arr[],int n){
    int i;
    int max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
     
    }
   return max;
}
int main(){
    int arr[100],n,i,max;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter %d integers",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int x= largestArray(arr,n);
   printf("largest element is %d",x);
   
}