/*
write a C program to Sort the array in ascending order and print it.


Input as :

Enter array size : 6

Enter 6 element : 4 3 5 6 2 1


Output as :

After sorting in ascending order :

1 2 3 4 5 6
*/

#include<stdio.h>
int main(){
    int a[100],i,n,j,temp;
    printf("enter the array size 1-100");
    scanf("%d",&n);
    printf("enter the %d elements",n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<n-2;i++){
        for(j=i+1;j<=n-1;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted elements are");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
   
}
