#include<stdio.h>
int main(){
    char s1[100],s2[100];
    int idx=0,i,j;
    printf("enter the string\n");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++){
        int cou=1;
        for(j=i+1;s1[j]!='\0';j++){
            if(s1[i]==s1[j]){
                s1[j]='1';
                cou++;
            }
        }
        if(cou!=1 && s1[i]!='1'){
            s2[idx++]=s1[i];
            s2[idx++]=cou+48;
        }
    }
    s2[idx]='\0';
    printf("%s",s2);
}