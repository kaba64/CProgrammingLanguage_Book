#include <stdio.h>
#include "htoi.h"

int main(int argc, char *argv[]){
  //char hexa[] = "0X1AB";
  char hexa[] = "0X56304";
  printf("The hexadecimal number is %s\n",hexa);
  printf("The size is %d\n",htoi(hexa));
  return 0;
}
