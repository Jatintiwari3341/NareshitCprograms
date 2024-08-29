/*remove char
*/

#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],ele;
    int i,j,f;
    printf("enter the string");
    scanf("%s",s1);
    int len=strlen(s1);
    printf("enter the character you want to remove");
    scanf(" %c",&ele);
    for(i=0;i<len;i++){
    if(s1[i]==ele){
        for(j=i;j<len;j++){
        s1[j]=s1[j+1];
        }
        i--;
      len--; 
    }
    }
    
    printf("%s",s1);
}