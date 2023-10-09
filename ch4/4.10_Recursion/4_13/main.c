#include <stdio.h>
#include "itoa.h"

#define NMAX 20

int main(int argc, char *argv[]){
  int x=-111222;
  char str[NMAX];
  
  itoa(x,str);
  printf("Integer: x = %d\n",x);
  printf("Recursive method for the reverse function: str = %s\n",str);
  return 0;
}
