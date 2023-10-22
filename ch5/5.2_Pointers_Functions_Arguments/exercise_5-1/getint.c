#include <stdio.h>
#include <ctype.h>
#include "getch.h"

/*Get an integer number in the form of string from input and convert it to an integer number
  pn : is the pointer in the calling main to an integer 
  Kazem Bzesefidpar
  October 22, 2023
*/
int getint(int *pn){
  int c, sign=1;
  while(isspace(c=getch()))
    ;
  sign = (c=='-') ? -1:1;
  if(c=='+' || c=='-')
    c=getch();
  if(!isdigit(c) && c!= EOF){
    /*capturing the invald input such as .11, www, .1@@www
     until a space entered or enter buttom*/
    ungetch(sign==-1 ? '-':'+');
    ungetch(c);
    while(!isspace(c=getchar())){
      ungetch(c);
    }
    return 0; /*not a number*/
  }
  for(*pn=0;isdigit(c);c=getch())
    *pn = 10 * *pn + (c - '0');
  *pn *=sign;
  if(c!= EOF)
    ungetch(c);
  return c;
}
