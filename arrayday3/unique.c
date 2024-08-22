#include<stdio.h>
int main(){
    int a[100],i,n,k,j,ele;
    printf("Enter the size 1- 100");
    scanf("%d",&n);
    printf("Enter %d integers",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
       printf("the unique elements found in the arrays\n");
      for(i=0;i<n;i++){
          ele=0;
          for(j=0;j<n;j++){
            //  if(i!=j && a[i]==a[j]){  ele=0;
           //       break;
           if(a[i]==a[j])
           {
               ele++;
           }
              }
              if(ele==1)
              {
                   printf("%3d",a[i]);
              }
      }
 return 0;     
           
     
}