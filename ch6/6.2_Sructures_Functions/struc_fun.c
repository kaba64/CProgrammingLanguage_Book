/*The example of the book page 130
  Kazem Bazesefidpar 
  November 8, 2023*/

/*makepoint from book page 130*/
#include "structs.h"

struct point makepoint(int x,int y){
  struct point temp;
  temp.x = x;
  temp.y = y;
  return temp;
}

/*Add to point from book page 130*/

struct point addpoint(struct point p1,struct point p2){
  p1.x+=p2.x;
  p1.y+=p2.y;
  return p1;
}
