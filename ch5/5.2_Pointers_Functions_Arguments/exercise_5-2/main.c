#include <stdio.h>
#include "getfloat.h"
#include "getch.h"

int main(int argc, char *argv[]){
  int status;
  float number;
  while((status = getfloat(&number)) != EOF){
    if(status == 0)
      check_buffer();
    else
      printf("The float number is %f \n",number);
  }
  return 0;
}
