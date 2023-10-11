#include <stdio.h>

#define swap(t,x,y)  t[x]+=t[y], t[y]=t[x]-t[y], t[x]-=t[y] 

int main(int argc,char* rgv[]){
  int data[] = {1,2,3,4};
  swap(data,0,3);
  printf("0 : %d, 3 : %d\n",data[0],data[3]);
  return 0;
}
