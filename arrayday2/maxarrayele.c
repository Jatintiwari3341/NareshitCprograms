/*Write a C program to find the max element from an array.


Input as :

Enter array size : 5

Enter 5 elements : 4 5 3 6 2

Man element is : 6
*/
#include<stdio.h>
int main(){
    int a[100],i,n,max;
    printf("enter the array size 1-100");
    scanf("%d",&n);
    printf("enter the %d elements",n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
  for(max=a[0],i=1;i<n;i++){
      if(max<a[i]) max=a[i];
  }
          printf("%d max",max);
      
      
   
   
}