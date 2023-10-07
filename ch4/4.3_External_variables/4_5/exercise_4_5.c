#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define MAXOP 100    /*maximum size of operand or operator*/
#define NUMBER '0'   /*signal that a number is found*/
#define BUFSIZE 100
#define MAXVAL 100   /*maximum depth of val stack*/
int sp = 0;          /*next free stack position*/
double val[MAXVAL];  /*value stack*/
char buf[BUFSIZE];   /*buffer for ungetch*/
int bufp =0;         /*next free position in buf*/

int getop(char* s);
int getch(void);
void ungetch(int c);
void push(double f);
double pop(void);
void view_stack(void);
void Clear_Stack(void);

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
      break;
    case '*':
      push(pop() * pop());
      break;
    case '-':
      op2 = pop();
      push(pop() - op2);
      break;
    case '/':
      op2 = pop();
      if(op2!=0.0)
	push(pop() / op2);
      else
      	printf("error: zero divisor\n");
      break;
    case '%':
      op2 = pop();
      op3 = pop();
      if(op3>=0.0 && op2>=0.0)
	push((int)op3%(int)op2);
      break;
    case 'V':
      view_stack();
      Clear_Stack();
      break;
    case 'F':
      printf("exp(x+y) = %lf\n",exp(pop()));
    }
    
  }
  printf("stack[0]:  %lf\n",val[0]);
  return 0;
}

int getop(char s[]){
  int i,c;
  i=0;
  while((s[0]=c=getch())==' '|| c=='\t')
    ;
  s[1]='\0';
  if(!isdigit(c) && c!='.'){
    return c; /*not a number*/
  }
  if(isdigit(c)) /*collect integer parts*/
    while(isdigit(s[++i]=c=getch()))
      ;
  if(c=='.')
    while(isdigit(s[++i]=c=getch()))
      ;
  s[i]='\0';
  if(c!= EOF)
    ungetch(c);
  return NUMBER; 
}

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
void push(double f) /*push f onto value stack*/
{
  if(sp<MAXVAL)
    val[sp++]=f;
  else
    printf("error: stack full, cannot push %g\n",f);
}
 
double pop(void)
{
  if(sp>0)
    return(val[--sp]);
  else{
    printf("error: stack empy\n");
    return 0.0;
  }
}

void view_stack(void) /* View two top elements of the stack*/
{
  if(sp>0){
    printf("The first element in the stack: %lf\n",val[sp-1]);
    if(sp>1){
      printf("The second element in the stack: %lf\n",val[sp-2]);
    }else{
      printf("The stack has only on element");
    }
  }else{
    printf("error: stack empy\n");
  }
}

void Clear_Stack(void) /*Clear an external static array (stack)*/
{
  int i;
  for(i=sp-1;i>=0;i--){
    val[i]=0.0;
  }
  sp=0;
}
