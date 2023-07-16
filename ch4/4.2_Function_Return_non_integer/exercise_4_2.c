#include <stdio.h>
#include "atof.h"

int main(int argc, char *argv[]){
  char s[] = "123.45e-2";
  printf("The number if %lf\n",atof(s));
  return 0;
}
