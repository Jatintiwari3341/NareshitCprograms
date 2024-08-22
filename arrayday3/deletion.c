#include<stdio.h>
int main(){
    int a[100],n,i,j,f=0,ele;
    printf("Enter the array size 1-100");
    scanf("%d",&n);
    printf("enter %d integers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter  elements to be deleted");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(a[i]==ele){
            for(n--,f=1,j=i;j<n;j++)
            a[j]=a[j+1];
            i--;
        }
    }
    if(f==0)printf("\n %d not found",ele);
    else{
        printf("elements are");
        for(i=0;i<n;i++)
        printf("%3d",a[i]);
    }
 
       
    
}