#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool armstrong(int n);
int countDigits(int n);
int main(){
    printf("Armstrongs numbers between 100 and 10000 are\n");
    armstrong(0);
    return 0;
}
bool armstrong(int n){
    int n1,rem,digits,result;

    for(n=100;n<=10000;n++){
        n1=n;
        result=0;
        digits=countDigits(n);

        while(n1!=0){
            rem=n1%10;
            result+=pow(rem,digits);
            n1/=10;
        }
        if(result==n){
            printf("%d\n",n);

        }
    }
}
int countDigits( int n){
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    return count;
}


