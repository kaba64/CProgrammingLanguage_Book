#include <stdio.h>
#include <ctype.h>
#include "getch.h"

/*Get a float number in the form of string from input and convert i to a floating number
  pf : is the pointer in the calling main to a floating number
  Kazem Bzesefidpar
  October 22, 2023
*/

int getfloat(float *pf){
  int c, sign;
  int fraction=0, divide=1;
  
  while(isspace(c=getch()))
    ;
  sign = (c=='-') ? -1:1;
  if(c=='+' || c=='-')
    c=getch();
  if(!isdigit(c) && c!= EOF && c!='.'){
    /*capturing the invald input such as .11, www, .1@@www
     until a space entered or enter buttom*/
    ungetch(sign==-1 ? '-':'+');
    ungetch(c);
    while(!isspace(c=getchar())){
      ungetch(c);
    }
    return 0; /*not a number*/
  }
  for(*pf=0;isdigit(c) || c=='.';c=getch()){
    if(fraction==1)
      divide*=10;
    if(c=='.')
      fraction=1;
    else
      *pf = 10 * *pf + (c - '0');
  }
  *pf *=sign;
  *pf /=divide;
  if(c!= EOF)
    ungetch(c);
  return c;
}
