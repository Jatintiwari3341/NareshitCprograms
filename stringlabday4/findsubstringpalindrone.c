#include<stdio.h>
int  main(){
    char s1[100];
    int len=0;
    printf("enter the string\n");
    scanf("%s",s1);
    for(;s1[len]!='\0';len++);
    int first=0,last=len-1,flag=1;
    while(first<last){
        if(s1[first]!=s1[last]){
            flag=0;
            break;
        }
        first++;
        last--;
    }
    if(flag){
          first=0,last=len-1;
        while(first<last){
            printf("palindrom substring\n");
            for(int j=first;j<=last;j++){
                printf("%c",s1[j]);
            }
            printf("\n");
            first++;
            last--;
        }
        printf("total palindrome substring are:%d",len/2);
    }
    else{
        printf("%s isn't palindrone substring",s1);
    }
}