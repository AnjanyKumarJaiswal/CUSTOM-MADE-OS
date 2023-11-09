#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "login_details.h"




//Create a file for any work type 
typedef struct creating_file{
  char file[100];
} filing;

filing s3;
int main01(){
  FILE *file2;
  char type[100];
  printf("Select the type of file want to create for work:\n");
  scanf("%s",type);
 if (strcmp(type,'docx')==0){
  printf("Enter the name of the file:\n");
  scanf("%s", s3.file);
  
  file2 = fopen(s3.file,"a");


 }


  return 0;
}


