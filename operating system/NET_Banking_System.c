#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


//Welcome To Savings Bank Acoount
 typedef struct Bankaccount{
    char accountname[50];
    int setpin; 
    int deposite; 
    int withdraw; 
    int pin; 
    int Balance;
    unsigned int accountnumber;
    char  pass[50]; 
    unsigned int accountnumber1;
    char member[50];
    int ammount;
    char bill[50];
} InternationalBank;
//Check your Log in details from bank dataset


InternationalBank s1; //Global variable to store all data of bank account


int main2(){
    int Menu;
    printf("Enter what do you want, To interact within the bank\n");
    printf("Menu\n1.New Account\n2.Deposit\n3.Withdraw\n4.Online Payment\n5.Loan\n");
    scanf("%d", &Menu);
    
    switch (Menu)
    {
        //Creating account
        case 1:
            printf("Create a new account\n");
            printf("Enter the name of the account:\n");
            scanf("%s", s1.accountname);
            printf("Set password:");
            scanf("%s", s1.pass);
            printf("\nYour account has been created\n");
            printf("Name:%s\n",s1.accountname);
            printf("Account Number:%u\n",s1.accountnumber );
            printf("Set your online Banking Pin for transactions\n");
            scanf("%d", &s1.setpin);
            while(s1.setpin < 1000 || s1.setpin > 9999){
                printf("Your pin is set ******\n");
                printf("The pin is : %d\n", s1.setpin);
                break;
            }
            printf("Stored Username: %s\n", s1.accountname);
            printf("Stored Password: %s\n", s1.pass);
            main();
            break;
        // Deposit money
        case 2:
            char username[50];
            printf("Enter the Log In credentials\n");
            printf("Enter the Username:");
            scanf("%s", username);
            char  password[50];
            printf("Password:");
            scanf("%s", password);
            
            

            if(strcmp(username, s1.accountname) == 0 && strcmp(password, s1.pass) == 0){
                printf("please wait logging you in....\n");
                while(s1.Balance==0){
                    printf("Your bank balance is empty\n");
                    char b;
                    printf("Would you like add some money in your bank account?(y/n)\n");
                    scanf(" %c", &b);
                    if(b=='y'){
                        printf("Enter the deposit that you want to pay:");
                        scanf("%d", &s1.deposite);
                        printf("\n");
                        s1.Balance=s1.deposite;
                        printf("Your current balance is : %d\n", s1.Balance);
                    }
                    else{
                        printf("If you don't add money to your bank account it would end up we have to close your bank account\n");
                        printf("Thank You!! Visit us again\n");
                        main();
                    }
                }
                printf("Your Bank has a Balance of about :%d\n", s1.Balance);
                break;
            }
            else {
                printf("The pass is incorrect please double check \n");
            }
            break;

        // Withdraw money
        case 3:
            printf("Enter the Log In credentials\n");
            char Username[50];
            printf("Enter the Username:\n");
            scanf("%s", Username);
            char Password[50];
            printf("Password:");
            scanf("%s", Password);
            
            if(strcmp(s1.accountname, Username) == 0 && strcmp(s1.pass, Password) == 0){
                printf("please wait logging you in....\n");
                printf("Enter the amount of money you would like to withdraw from your bank\n");
                scanf("%d",&s1.withdraw);
                while(s1.Balance-s1.withdraw < 0){
                    printf("You don't have enough money to withdraw in your bank account\n");
                    printf("Balance=0\n");
                    char c;
                    printf("Would you like to take Loan from bank?(y/n)");
                    scanf(" %c", &c);
                    if(c=='y'){
                        goto Loan;
                    }
                    else {
                        printf("If you not into taking a new loan then you may deposit some money into bank\n");
                        printf("Thank You!!! visit us again!\n");
                    }
                }
                s1.Balance -= s1.withdraw;
                printf("Your current bank balance is : %d\n", s1.Balance);
            }
            else {
                printf("The pass is incorrect please double check \n");
            }
            break;

        // Online transactions 
        case 4:
            printf("Welcome to our online transactions section\n");
            printf("Using the Account number given you can do online transactions \n ");
            printf("Account Number : %u\n", s1.accountnumber);
            printf("Enter the pin:");
            scanf("%d", &s1.pin);
            if(s1.pin==s1.setpin){
                printf("please wait logging you in....\n");
                printf("What purpose do you want to use ?\n");
                int transction;
                printf("1.Pay friend/family\n2.Pay Bills\n3.Receive money\n");
                scanf("%d", &transction);
                switch(transction){
                    case 1:
                        printf("Enter friend/family name: \n");
                        scanf("%s", s1.member);
                        printf("Their Account Number:%u\n",s1.accountnumber1);
                        printf("Enter Amount you want to transfer:\n");
                        scanf("%d" ,&s1.ammount);
                        s1.Balance=s1.Balance-s1.ammount;
                        printf("Your current bank balance:%d\n", s1.Balance);
                        break;

                    case 2:
                        printf("Which bills do you want to pay for?(Electricity/Water/Tv Recharge/Other)\n");
                        printf("preferably enter this : Electricity/Water/Tv/other\n");
                        scanf("%s", s1.bill);
                        if(strcmp(s1.bill, "Electricity") == 0){
                            printf("Enter the amount for paying the electricity bill:\n");
                            scanf("%d",&s1.ammount);
                            s1.Balance=s1.Balance-s1.ammount;
                            printf("Your current bank balance : %d\n", s1.Balance);
                        }
                        else if(strcmp(s1.bill, "Water") == 0){
                            printf("Enter the amount for paying the Water bill:\n");
                            scanf("%d",&s1.ammount);
                            s1.Balance=s1.Balance-s1.ammount;
                            printf("Your current bank balance : %d\n", s1.Balance);
                        }
                        else if(strcmp(s1.bill, "Tv") == 0){
                            printf("Enter the amount for paying the Tv recharge bill:\n");
                            scanf("%d",&s1.ammount);
                            s1.Balance=s1.Balance-s1.ammount;
                            printf("Your current bank balance : %d\n", s1.Balance);
                        }
                        else if(strcmp(s1.bill, "Other") == 0){
                            printf("Enter the amount for paying the Other bill:\n");
                            scanf("%d",&s1.ammount);
                            s1.Balance=s1.Balance-s1.ammount;
                            printf("Your current bank balance : %d\n", s1.Balance);
                        }
                        else {
                            printf("Currently that is not available in our online transactions\n");
                            printf("Thank you visit us again!!!\n");
                        }
                        break;

                    default:
                        printf("Thank you visit us again!!!!\n");
                        break;
                }
                break;
            }
            else {
                printf("The pin is incorrect please double check \n");
            }
            break;

        default:
            printf("We can't provide you that service currently\n");
            printf("Kindly visit us again!!!!!!\n");
            break;
    }
    main();
    
    Loan:
        printf("For taking loan we would like you tell us your Account Number and Name!!!!\n");
        printf("Account Number:%u\n", s1.accountnumber);
        printf("Name:%s\n",s1.accountname);
        printf("We have successfully verified your account\n");
        printf("The Loan availability is up to 1 Million\n");
        int loan;
        printf("Enter the amount of loan you need:");
        scanf("%d", &loan);
        if(loan>=100000){
            printf("The loan you have redeemed for is up to more than 100K\n");
            printf("The Loan received:%d\n", loan);
            s1.Balance=loan;
            printf("Your Bank Balance becomes : %d\n", s1.Balance);
        }
        else {
            printf("The Loan received:%d\n", loan);
            main();
        }
    return 0;
}
