#include <math.h>
/*
hexadecimal number uses 16 symbols {0, 1, 2, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F} 
to represent all numbers. Here, (A, B, C, D, E, F) represents (10, 11, 12, 13, 14, 15).

*/
int htoi(char in_hexa[])
{
  int number=0,size,i;
  int output=0;
  size = 2;
  while(in_hexa[size]!='\0'){
    number++;
    size++;
  }
  for(i=2;i<size;i++)
    {
      if(in_hexa[i]>='0' && in_hexa[i]<='9')
        {
          output = output+((int)in_hexa[i]-'0')*pow(16,(number-1));
          number-=1;
        }else
        {
          output = output+((int)in_hexa[i]-55)*pow(16,(number-1));
          number-=1;
        }
    }
  return output;
}
