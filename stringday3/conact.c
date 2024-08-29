/*
conact*/

#include<stdio.h>
int main(){
    char s1[100],s2[100],s3[100];
    int i ,j;
    printf("enter the  first string\n");
     scanf("%s",s1);
   // gets(s1);
    printf("enter the second string\n");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++)s3[i]=s1[i];
    for(j=0;s2[j]!='\0';i++,j++)s3[i]=s2[j];
    s3[i]='\0';
    printf("Ur name is %s",s3);
}