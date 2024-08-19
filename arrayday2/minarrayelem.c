/*Write a C program to find the min element from an array.


Input as :

Enter array size : 5

Enter 5 elements : 4 5 3 6 2

Min element is : 2

*/

#include<stdio.h>
int main(){
    int a[100],i,n,min;
    printf("enter the array size 1-100");
    scanf("%d",&n);
    printf("enter the %d elements",n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
  for(min=a[0],i=1;i<n;i++){
      if(min>a[i]) min=a[i];
  }
          printf("%d min",min);
      
      
   
   
}