#include <stdio.h>
#include <math.h>
typedef struct Calculator{
int  sumFunction;
int  subFunction;
int  divFunction;
int multiFunction;
int percentFunction;

int a; 
int b; 
char operator;
}Calculations;
Calculations s2;


int main(){
    printf("Welcome to Simple C language made Calculator\n \n ");
    printf("Enter the Number in the Calcultor: \n");
    scanf("%d", &s2.a);
    printf("Enter the operator you want to use  (+ , / , * ,-, )\n");
    scanf("%s", &s2.operator);
    switch (s2.operator)
    {
    case '+':
        printf("Enter the second number:");
        scanf("%d", &s2.b);
        s2.sumFunction = s2.a+s2.b;
        printf("\nAns:%d\n",s2.sumFunction);
        break;
    case '-':
        printf("Enter the second number:");
        scanf("%d", &s2.b);
        s2.subFunction = s2.a-s2.b;
        printf("\nAns:%d\n",s2.subFunction);
        break;
    case '/':
        printf("Enter the second number:");
        scanf("%d", &s2.b);
        s2.divFunction = s2.a/s2.b;
        printf("\nAns:%d\n", s2.divFunction);
        break;
    case '*':
        printf("Enter the second number:");
        scanf("%d", &s2.b);
        s2.multiFunction = s2.a*s2.b;
        printf("\nAns:%d\n",s2.multiFunction);
        break;
    case '%':
        printf("Enter the second number:");
        scanf("%d", &s2.b);
        s2.percentFunction = (s2.a/s2.b)*100;
        printf("\nAns:%d\n", s2.percentFunction);
        break;
    default:
        printf("Syntax Error\n");
        break;
    }
    char p;
    printf("Do you want to continue further calculation?(y/n):");
    scanf("%s", &p);
    if(p=='y'){
        char z;
        printf("Want to continue with this Answer?(y/n)");
        scanf("%s",&z);
        if(z=='y'){
            int c;
            char op;
            printf("Enter the operator:");
            scanf("%s", &op);
            switch (op)
            {
            case '+':
                printf("\nEnter the number:");
                scanf("%d", &c);
                printf("\nThe Final Answer is %d ", s2.sumFunction+c);
                break;
            case '-':
                printf("Enter the number:");
                scanf("%d", &c);
                printf("\nThe Final Answer is %d ", s2.subFunction-c);
                break;
            case '/':
                printf("Enter the number:");
                scanf("%d", &c);
                printf("\nThe Final Answer is %d ", s2.divFunction/c);
                break;
            case '*':
                printf("Enter the number:");
                scanf("%d", &c);
                printf("\nThe Final Ans is %d ", s2.multiFunction*c);
                break;
                
            
            default:
            printf("Syntax Error! End of the Program exit\n");
                break;
            }

        }
        else {
            printf("You can Start fresh\n");
            main();
        }
        
    }
    else {
        printf("exit\n");
    }
return 0;
}



    
