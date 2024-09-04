#include<stdio.h>
int  evenodd(int n){
if(n%2==0){
    printf("even");
}
else{
    printf("odd");
}
   
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int number=evenodd(n);
  //  printf("%d",number);
    
}