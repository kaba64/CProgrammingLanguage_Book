#include <stdio.h>
#include "calc.h"

#define MAXVAL 100   /*maximum depth of val stack*/
int sp = 0;          /*next free stack position*/
double val[MAXVAL];  /*value stack*/

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

void out_put(char type_op)
{
  printf("The result of the operation %c is %lf.\n",type_op,val[sp-1]);
}
