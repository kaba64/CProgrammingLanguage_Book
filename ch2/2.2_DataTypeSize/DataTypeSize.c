#include <stdio.h>
#include "Range_signed.h"
/*
  sizeof gives the size of the varibale in byte
  each byte is 8 bite
*/

void Range_signed(int,char);
#define SIZE(x) 8*sizeof(x)

int main(int argc, char *argv[])
{
  //printf("Hi! \nThe C Programming Language!\n");
  printf("range of singed int\n");
  Range_signed(SIZE(int),'Y');
  printf("range of unsinged int\n");
  Range_signed(SIZE(unsigned int),'N');
  printf("range of long int\n");
  Range_signed(SIZE(long int),'Y');
  printf("range of char\n");
  Range_signed(SIZE(char),'Y');
  printf("range of float\n");
  Range_signed(SIZE(float),'N');
  printf("range of double\n");
  Range_signed(SIZE(double),'Y');
  return 0;
}
