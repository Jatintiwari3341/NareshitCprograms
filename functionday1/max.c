#include<stdio.h>
void max(int a,int b,int c){
    if(a>b && a>c){
        printf("A is larger %d",a);
    }
    else if(b>a && b>c){
        printf("b is larger %d",b);
    }
    else
    printf("c is larger %d",c);
}
int main(){
    int a;int b;int c;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    max(a,b,c);

}