#include <stdio.h>
#include "strend.h"

int main(int argc,char *argv[]){
  char s[] = "Kazem, how are you?"; // return of strend(s,t) > 1
  //char s[] = "Kazem, how are you"; // return of strend(s,t) > 0 since the last char of s is not in t
  char t[] = "are you?";
  printf("%d\n",strend(s,t));
  return 0;
}
