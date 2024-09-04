#include<stdio.h>
int  sumnatural(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
    
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int sum=sumnatural(n);
    printf("The first of %d is %d",n,sum);
}