#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"

#define MAXOP 100    /*maximum size of operand or operator*/

int main(int argc, char *argv[]){
  int type;
  double op2, op3;
  char s[MAXOP];
  
  while((type=getop(s)) != EOF){
    switch(type){
    case NUMBER:
      push(atof(s));
      break;
    case '+':
      push(pop() + pop());
      out_put('+');
      break;
    case '*':
      push(pop() * pop());
      out_put('*');
      break;
    case '-':
      op2 = pop();
      push(pop() - op2);
      out_put('-');
      break;
    case '/':
      op2 = pop();
      if(op2!=0.0)
	push(pop() / op2);
      else
      	printf("error: zero divisor\n");
      out_put('/');
      break;
    case '%':
      op2 = pop();
      op3 = pop();
      if(op3>=0.0 && op2>=0.0)
	push((int)op3%(int)op2);
      out_put('%');
      break;
    case 'V':
      view_stack();
      break;
    case 'F':
      printf("exp(x+y) = %lf\n",exp(pop()));
    }
  }
  Clear_Stack();
  return 0;
}
