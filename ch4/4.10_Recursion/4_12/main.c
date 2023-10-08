#include <stdio.h>
#include "itoa.h"
#include "itoa_recursion.h"

#define NMAX 20

int main(int argc, char *argv[]){
  int x=-1234;
  char str[NMAX],str_r[NMAX];

  itoa_recursive(x,str_r);
  itoa(x,str);
  printf("Integer: x = %d\n",x);
  printf("String: str = %s\n",str);
  printf("Recursive method String: str = %s\n",str_r);
  return 0;
}
