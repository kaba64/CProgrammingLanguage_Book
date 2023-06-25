#include <stdio.h>
#include "lower.h"

int main(int argc, char *argv[]){
  char upper[] = "AbCDeF";
  
  printf("Mixed letters : %s\n",upper);
  lower_case(upper);
  printf("Upper letters converted to lower letters: %s\n",upper);
  return 0;
}
