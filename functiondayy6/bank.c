#include<stdio.h>

void create_acc();
void deposit_amt(int);
void withdraw_amt(int);
void check_bal();
void exitFun();

int curr_bal=2000,flag=1;
int main(){
    int choice,amt=0;
    do{
        printf("\n---------------------------------------");
        printf("\n---Bank Account menu----");
        printf("\n1.Create Account");
        printf("\n2.Deposit Money");
        printf("\n3.Withdraw Money");
        printf("\n4.Check Balance");
        printf("\n5.Exit");

        printf("\nenter your choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
        if(flag){
            create_acc();
            flag=0;
        }
        else{
            printf("\nAccount already created");
        }
            break;

         case 2:
         if(!flag)
         {
            printf("\nEnter amount to deposit:");
            scanf("%d",&amt);
            deposit_amt(amt);
         }   
         else{
            printf("\nPlease create your account!!!");
         }
         break;

         case 3:
         if(!flag){
            printf("\nEnter the amount to withdraw");
            scanf("%d",&amt);
            withdraw_amt(amt);
         }
         else{
            printf("\nPlease create your account!!!");
         }
         break;

         case 4:
         if(!flag){
        check_bal();
         }
         else{
            printf("\nPlease cretae your account!!!");
         }
         break;
         case 5:
         exitFun();
         break;

        
        default:
            printf("\nInvalid input");
            return 0;
        }

    }while (choice!=5);
}

void create_acc()
{
    printf("\nAccount created successfully with initail balance of Rs.2000");

}
void deposit_amt(int amt){
    if(amt<=0){
        printf("\nInvalid amount to deposit");
    }
    else{
        curr_bal+=amt;
        printf("\nRs.%d deposited successfully",amt);
        check_bal();
    }
}
void withdraw_amt(int amt){
    if(amt<=0){
        printf("\nInvalid  amount to withdrawl");

    }
    else if(curr_bal<amt){
        printf("\nInsuufficent funds");
    }
    else{
        curr_bal-=amt;
        printf("\nRs.%d withdrawn successfully",amt);
        check_bal();
    }
}
void check_bal(){
    printf("\nyour current balance is Rs.%d",curr_bal);
}
void exitFun(){
    printf("Thank you for using our banking system.");
}
