#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s1[100];
    int i,j,f=1;
    printf("enter the string\n");
    scanf("%s",s1);
    int len=strlen(s1);
    for(i=0;i<len;i++)
    {
        
        
        
    if(s1[i]!=s1[len-i-1])
    {
        f=0;
        break;
    }
        
     }
    
    if(f==1)
    {
        puts("it is palindrone");    
    }
    else
    {
          puts("it is not palindrone");  
    }
}