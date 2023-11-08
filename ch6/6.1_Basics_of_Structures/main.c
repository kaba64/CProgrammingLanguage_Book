#include <stdio.h>
/*The example of the book page 128
 Kazem Bazesefidpar
 November 8, 2023*/

struct point{
  int x;
  int y;
};

struct rect {
  struct point pt1;
  struct point pt2;
};

int main(int argc,char *argv){
  struct point pt = {2,4};
  double dist, sqrt(double);
  dist = sqrt((double)pt.x*pt.x+(double)pt.y*pt.y);
  printf("(x,y) = (%d,%d) \n",pt.x,pt.y);
  struct rect rectangle;
  rectangle.pt1 = pt;
  rectangle.pt2.x = pt.x+2;
  rectangle.pt2.y = pt.y+2;
  return 0;
}
