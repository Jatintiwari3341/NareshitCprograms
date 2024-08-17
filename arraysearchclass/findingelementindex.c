#include<stdio.h>
int main(){
    int a[100],i,n,ele,f=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of arrrays");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the elements to search");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(a[i]==ele)printf("%d in a[%d] cell\n ",ele,i,f=1);
    }
    if(f==0)printf("%d not found");
}