#include <stdio.h>
#include <string.h>
#include "expand.h"

#define Nmax 200

int main(int argc, char *argv[]){
  char s1[]="a-b-c",s2[Nmax];
  int i;
  /*test 1*/
  expand(s1,s2);
  printf("%s\n",s1);
  printf("%s\n",s2);
  char s3[]="a-z0-9";
  /*test 2*/
  expand(s3,s2);
  printf("%s\n",s3);
  printf("%s\n",s2);
  char s4[]="-a-z";
  /*test 3*/
  expand(s4,s2);
  printf("%s\n",s4);
  printf("%s\n",s2);
  return 0;
}
