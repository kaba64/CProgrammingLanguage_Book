#include <stdio.h>

/* The formula : -2^(n-1) to (2^(n-1)-1) */

void Range_signed(int NBit,char sign)
{
  long long int Lower, Upper;
  Lower = 1;
  while (NBit != 1){
    Lower = Lower << 1;
    NBit--;
  }
  if(sign=='N'){
    Upper = 2*Lower;
    printf("[0 ...  %lld]\n", Upper);
  }
  else{
    Upper = (Lower -1 );
    Lower=-1*Lower;
    printf("[%lld ...  %lld]\n", Lower, Upper);
  }
}
