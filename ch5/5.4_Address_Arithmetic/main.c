#include <stdio.h>
#include <string.h>
#include "strlen.h"

/*To test the function strlen 
  Kazem Bazesefidapr
  October 24, 2023
*/

int main(int argc,char *argv[]){
  char name[] = "Kazem Bazesefidpar";
  printf("The length of name is %ld\n",strlen_mine(name));
  printf("The length of name is %ld\n",strlen(name));
  return 0;
}
