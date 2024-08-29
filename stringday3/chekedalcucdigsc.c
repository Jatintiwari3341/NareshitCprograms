/*check alpha,digits,sc,
*/

#include<stdio.h>
int main(){
    char s1[100],s2[100];
    int i,j,uc=0,lc=0,dig=0,sc=0;
    printf("enter the string\n");
    scanf("%s",s1);
   
    for(i=0;s1[i]!='\0';i++){
   if(s1[i]>='a'&&s1[i]<='z'){
       lc++;
   }
   else if(s1[i]>='A'&& s1[i]<='Z'){
       uc++;
   }
   else if(s1[i]>='0' && s1[i]<='9'){
       dig++;
   }
   else
   sc++;
    }
   if(lc>=1 && uc>=1 && dig>=1 && sc>=1){
       printf("Our string is matching our cases");
   }
   else{
       printf("our string is not matching our cases");
   }
}
