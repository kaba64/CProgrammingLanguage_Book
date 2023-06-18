#include <stdio.h>
#include <string.h>
#include "any.h"

int main(int argc, char *argv[]){
  char s1[] = "abcdeefghiijkl";
  char s2[] = "egi";
  //char* r;
  
  printf("s1 : %s\n",s1);
  printf("s2 : %s\n",s2);
  printf("The first occurrence of s2 in s1 \n");
  printf("It is the %c element using my implementation\n",s1[any(s1,s2)]);
  printf("It is the %c element using the standard library\n",*(strpbrk(s1,s2)));
  return 0;
}
