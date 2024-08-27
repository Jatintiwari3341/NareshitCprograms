#include<stdio.h>
int main(){
    char s[100];
    int i,j,t;
    printf("enter the string");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    for(j=i+1;s[j]!='\0';j++)

    if(s[i]>s[j]){
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    
    printf("%s",s);
}