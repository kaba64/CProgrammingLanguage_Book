#include <stdio.h>
#include "strcat.h"

#define size_s 100

int main(int argc,char *argv[]){
  char t[] = "Kazem Bazesefidpar";
  char s[size_s] = "Hi ";
  strcat_p(s,t);
  printf("s : %s\n",s);
  return 0;
}
