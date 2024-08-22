/*
Write a C program to remove all occurrences of a specific element from a given array of integers. The program should display the resulting array after removing the element.


Test Data :

Input the size of array : 10

Input 10 elements in the array : 

3 2 5 6 2 7 9 2 2 1


Input the element that you want to delete: 2


Expected Output : 

The new list is : 3 5 6 7 9 1


*/

#include<stdio.h>
int main(){
    int a[100],i,n,k,j,ele;
    printf("Enter the size 1- 100");
    scanf("%d",&n);
    printf("Enter %d integers",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
       printf("enter the element to be deleted");
       scanf("%d",&ele);
       for(i=0;i<n;i++){
      if(a[i]==ele){
          for(j=i;j<n-1;j++){
      a[j]=a[j+1];
       }
                n--;
                i--;
            }
        }
        printf("elements are");
        for(i=0;i<n;i++)
        printf("%3d",a[i]);

    // for(int i=0;i<n;i++)
    // {
    //     if(a[i]==ele)
    //     {
    //         continue;
    //     }
    //     printf("%3d",a[i]);
    // }
    
}