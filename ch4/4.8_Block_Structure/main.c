#include "stdio.h"

int main(int argc, char *argv[]){
  int x=1,y=6;
  printf("Outside the block: x = %d, y = %d\n",x,y);
  {
    double x=11.0,y=66.0;
    printf("Inside the block: x = %lf, y = %lf\n",x,y);
  }
  return 0;
}
