/*The example of the book page 130
 Kazem Bazesefidpar
 November 8, 2023*/
#include <stdio.h>
#include <assert.h>
#include "structs.h"
#include "struc_fun.h"

int main(int argc,char *argv){
  struct point pt1 = makepoint(2,4);
  struct point pt2 = makepoint(4,8);
  struct point middel, *pp=&middel;
  
  printf("p1 = (x,y) = (%d,%d) \n",pt1.x,pt1.y);
  printf("p2 = (x,y) = (%d,%d) \n",pt2.x,pt2.y);
  middel = addpoint(pt1,pt2);
  assert(((*pp).x==middel.x) && ((*pp).y==middel.y));
  printf("middel point = (x,y) = (%d,%d) \n",pp->x,pp->y);
  return 0;
}
