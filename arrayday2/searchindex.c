/*
Write a C program to find the element given by user is present in the 

array or not 

If the element is present in the array also programmer have to print 

index position of that searching element.

If the user pass the element for searching in the array is not present

then also provide a appropriate message to the user that element is not 

present inside the array.


Input 1:-

[1,2,3,4,5,6,7]
*/

#include<stdio.h>
int main(){
    int a[100],i,n,ele,f=0;
    printf("enter the array size 1-100");
    scanf("%d",&n);
    printf("enter the %d elements",n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    printf("enter the element you want to search index");
    scanf("%d",&ele);
for(i=0;i<n;i++){
    if(a[i]==ele)printf("%d in a[%d] cell\n",ele,i,f=1);
}
if(f==0)printf("%d not found",ele);
   
   
}

