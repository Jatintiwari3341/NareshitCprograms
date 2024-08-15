/*
    0
    1 0

    0 1 0

    1 0 1 0

    0 1 0 1 0 
    */

   #include<stdio.h>
   int main(){
    int n,r,c;
    printf("enter the numbers");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            if((r+c)%2==0)
{
    printf("0");
}
    else{
        printf("1");
    }
}        
printf("\n");
    }
   }