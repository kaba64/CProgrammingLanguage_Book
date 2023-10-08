#include <stdio.h>

/* The recursive version of itoa : convert n to characters in s
Kazem Bazesefidpar 2023/10/08 */

void itoa_recursive(int n, char s[])
{
  static int sign, i=0, original;
  if (n < 0){ 
    sign = -1;        /* record sign */
    n = -n;
    original = n;
  }/* make n positive */
  if(n/10)
    itoa_recursive(n/10,s);
  if(sign==-1){
    s[i++]='-';
    sign = 1;
  }
  s[i++] = n % 10 + '0';
  if(n==original)
    s[i++] ='\0';
}
