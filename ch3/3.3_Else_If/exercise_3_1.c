#include <stdio.h>
#include "binsearch.h"

#define Nmax 20

int main(int argc, char *argv[]){
  int v[Nmax],x;
  int i;
  for(i=0;i<Nmax;i++)
    v[i] = i;
  printf("Please enter the search value within the bound [%d,%d] :\n",v[0],v[Nmax-1]);
  scanf("%d",&x);
  printf("The search value is in the %dth element of the arrary v.\n",binsearch(x,v,Nmax)+1);
  return 0;
}
