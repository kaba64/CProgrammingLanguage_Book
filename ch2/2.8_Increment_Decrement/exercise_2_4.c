#include <stdio.h>
#include "squeeze.h"

int main(int argc, char *argv[]){
  char s1[] = "abcdeefghiijkl";
  char s2[] = "aegi";
  printf("s1 : %s\n",s1);
  printf("s2 : %s\n",s2);
  printf("Removing all the occurence of s2 from s1\n");
  squeeze(s1,s2);
  printf("s1 : %s\n",s1);
  return 0;
}
