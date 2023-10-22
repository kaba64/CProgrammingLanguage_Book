#include <stdio.h>
#include "getint.h"
#include "getch.h"

int main(int argc, char *argv[]){
  int number, status;
  while((status = getint(&number)) != EOF){
    if(status == 0)
      check_buffer();
    else
      printf("The integer number is %d \n",number);
  }
  return 0;
}
