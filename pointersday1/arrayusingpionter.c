#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter %d array elements",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
     int *ptr=&arr;
     printf("elemets are");
    for(i=0;i<n;i++){
        printf("%d",*(ptr+i));
     
    }

}