#include <stdio.h>
#include <stdlib.h>
#include <string.h> 



//Create a username in your Operatoring System 
typedef struct details{
  char email[100];
  char pass[50];
} Userdetails;
Userdetails S1;
int main1(){

  FILE *file; 
  int *ID ;
    file = fopen("os_login.txt", "a");
    if(file==NULL){
    return 1;
    }
    
printf("Enter your email:");

  if(fgets(S1.email , sizeof(S1.email), stdin)!=NULL){
    // Remove the newline character from the input
    S1.email[strcspn(S1.email,"\n")]='\0';
    //Enter the email
    fprintf(file , "Email:%s", S1.email);
  }
  else {
    printf("Failed to read the provided email\n");
  }
printf("Enter Your Password:");
  if(fgets(S1.pass, sizeof(S1.pass), stdin)!=NULL){
    // Remove the newline character from the input
    S1.pass[strcspn(S1.pass,"\n")]='\0';
    //Enter your pass word
    fprintf(file , "Password:%s", S1.pass);
  }
  else {
    printf("Invalid password! Please try again\n");
  }
  fclose(file);
char user_email[100];
printf("Enter the stored email from the documentation:\n");
scanf("%s", user_email);
char user_pass[50];

printf("Pass:\n");
scanf("%s", user_pass);
if(strcmp(user_email,S1.email)==0 && strcmp(user_pass,S1.pass)==0){
    printf("You have entred correct email and pass \n");
    printf("Email:%s", user_email);
    printf("Your ID:%p\n", (void*)ID);
}
else {
    printf("Incorrect please check you email and pass\n");
}

  return 0;

}
