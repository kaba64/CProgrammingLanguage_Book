#include <stdio.h>
#include <ctype.h>

#define BUFSIZE 100
char buf[BUFSIZE];   /*buffer for ungetch*/
int bufp =0;         /*next free position in buf*/

int getch(void) /*get a possibly pushed back character*/
{
  return (bufp>0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /*push character back on input*/
{
  if(bufp>=BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++]=c;
}

void check_buffer(void){
  if(bufp>0){
    if(buf[bufp-1]==10 || buf[bufp-1] == '.' || !isdigit(buf[bufp-1])){
      printf("The invalid input is %c\n",buf[bufp-1]);
      buf[--bufp] = '\0';
    }
  }
}
