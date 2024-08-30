#include<stdio.h>
int main(){
    char s1[100];
    int i;
    printf("enter the string");
    gets(s1);
    if(s1[0]>='a' && s1[0]<='z'){
        s1[0]=s1[0]-32;
    }
    for(i=1;s1[i]!='\0';i++){
           if(s1[i]==' '){
        if(s1[i+1]>='a' && s1[i+1]<='z'){
            s1[i+1]=s1[i+1]-32;
            i++;
        }
        }
        else if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]=s1[i]+32;
        }
    }
    printf("%s",s1);
}