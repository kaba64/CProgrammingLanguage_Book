#include <stdio.h>

long int strlen_mine(char *s){
  char *p=s;

  while(*p!='\0')
    p++;
  printf("inside function strlen p is %p and s is %p with p-s=%ld\n",p,s,p-s);
  return p-s;
}
