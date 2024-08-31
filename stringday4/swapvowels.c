#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    int i,j;
    printf("enter the string\n");
    scanf("%s",s1);
    int len=strlen(s1);
     j=len-1;
    for(i=0;i<len/2;i++)
    {
      if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
      {
       
           if(s1[j]=='a'||s1[j]=='e'||s1[j]=='i'||s1[j]=='o'||s1[j]=='u'||s1[j]=='A'||s1[j]=='E'||s1[j]=='I'||s1[j]=='O'||s1[j]=='U')
           {
               char t=s1[i];
               s1[i]=s1[j];
               s1[j]=t;
               j--;
           }
           else
           {
               i--;
               j--;
           }
        }
        
      }
    
   printf("%s",s1);    
  return 0;      
}