/*upper case
*/

#include<stdio.h>
int main(){
    char s[100];
    int i,in,posi;
    printf("Enter the string");
    scanf("%s",s);
    printf("enter the index\n");
    scanf(" %d",&in);
    printf("enter the position\n");
    scanf("%d",&posi);
    for(i=in;i<posi-1;i++)
    if(s[i]>='a'&& s[i]<='z')
        s[i]-=32;
    
    printf("%s",s);
    
}