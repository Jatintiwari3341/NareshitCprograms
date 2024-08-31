#include<stdio.h>
int main(){
    char s1[100],s2[100];
    int i,j,k;
    printf("enter the  first string\n");
    scanf("%s",s1);
    printf("enter the second string\n");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++){
        for(j=0;s2[j]!='\0';j++){
            if(s1[i]==s2[j]){
                for(k=j;s2[k]!='\0';k++){
                    s2[k]=s2[k+1];
                }
            }
        }
    }
     printf("%s",s2);
}
           



