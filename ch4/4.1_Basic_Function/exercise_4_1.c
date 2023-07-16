#include <stdio.h>
#include "strindex.h"

int main(int argc, char *argv[]){
  char s[] = "abcdefghi";
  char t[] = "def";
  printf("The location of the rightmost occurance is %d\n",strrindex(s,t));
  return 0;
}
