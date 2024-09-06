#include<stdio.h>
#include<string.h>
int ispalindrone(char str[]){
int low=0;
int high=strlen(str)-1;
while(low<high){
    if(str[low]!=str[high]){
      printf("not a palindrone");
        return 0;
    }
    low++;
    high--;
}
return 1;
}
int main(){
    char str[100];
    printf("enter the string");
    scanf("%s",str);
    printf("%s is palindrone %d\n",str,ispalindrone(str));

}