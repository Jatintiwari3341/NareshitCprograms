#include<stdio.h>
int main(){
    char s1[100];
    char *p;
    int vcount=0,ccount=0,i;
    printf("enter the string");
    gets(s1);
    p=s1;
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'){
            vcount++;
        }
        else
            ccount++;
        
       // p++;
    }
    printf("total vowels in string=%d",vcount);
    printf("total consonant in string=%d",ccount);
    }
