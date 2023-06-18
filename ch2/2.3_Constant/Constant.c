#include <stdio.h>
#include "Range_signed.h"

#define SIZE(x) 8*sizeof(x)
/*
  An integer too long to fit an integer varibale 
  will be taken long int automatically in constat variables.
*/
#define a 123456789//123456789L
#define c 3.455555555555
#define d '0'
#define e "Always be"
#define	f " positive and do your best"
int main(int argc, char *argv[])
{
  int b;
  char g[100];
  b = 123456789123456789; /*This will give overflow!*/
  printf("range of constant a\n");
  Range_signed(SIZE(a),'Y');
  printf("range of constant c\n");
  Range_signed(SIZE(c),'Y');
  printf("The variable d = %c, and in the numeric %d\n",d,d);
  printf("The variable e = %s\n",e);
  int i=0,j=0;
  while (e[i]!='\0')
    {
      g[i]=e[i];
      i++;
    }
  while	(f[j]!='\0')
    {
      g[i]=f[j];
      i++;
      j++;
    }
  //g = e+f;
  printf("The concatenated g = %s.\n",g);
  return 0;
}
