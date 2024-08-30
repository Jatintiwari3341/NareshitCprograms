#include<stdio.h>
int main(){
char s1[100];
int i,s;
printf("enter the string\n");
scanf("%s",s1);
for(i=0;s1[i]!='\0';i++){
    if(s1[i]>='0'&& s1[i]<='9'){
        s+=s1[i]-'0';
    }
    
}
printf("%d ",s);
}