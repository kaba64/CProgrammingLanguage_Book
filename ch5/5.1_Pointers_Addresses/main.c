#include <stdio.h>

#define NMAX 10

int main(int argc, char* argv[]){

  int x = 1, y = 2, z[NMAX];
  int *ip;
  printf("Initial values : x = %d, y = %d\n",x,y);
  ip = &x;
  printf("Pointer value pointing to x : ip = %p\n",ip);
  y = *ip;
  *ip= 0;
  printf("Changed variables by using pointer : x = %d, y = %d\n",x,y);
  ip = &z[0];
  printf("Pointer value pointing to z[0] : ip = %p\n",ip);
  printf("Pointer address : %p\n",&ip);
  return 0;
}
