#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    int i,j;
    printf("enter the string\n");
    gets(s1);
    for(i=0;s1[i]!='\0';i++){
    int c=0;
    for(j=1;j<=i;j++){
        if(i%j==0){
            c++;
        }
    }
        if(c==2){
            printf("%c",s1[i]);
        }
    }
    
}