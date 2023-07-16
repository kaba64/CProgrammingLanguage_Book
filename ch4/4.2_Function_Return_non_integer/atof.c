#include <ctype.h>

double atof(char s[]){
  // s : in string
  double val, power, power2;
  int i,j,k, sign;
  
  for(i=0;isspace(s[i]);i++)
    ;
  sign = (s[i]=='-')? -1:1;
  if(s[i]=='+' || s[i]=='-')
    i++;
  for(val=0.0;isdigit(s[i]);i++)
    val = 10.0*val+ (s[i]-'0');
  if(s[i]=='.')
    i++;
  for(power=1.0;isdigit(s[i]);i++){
    val	= 10.0*val+ (s[i]-'0');
    power*=10.0;
  }
  if(s[i]=='e' || s[i]=='E'){
    k = i+1;
    power2=1.0;
    if(s[i+1]=='-' || s[i+1]=='+')
      k+=1;
    for(j=0;j<(s[k]-'0');j++){
      power2*=10.0;
    }
    if(s[i+1]=='-')
      power2=1.0/power2;
  }
  return (sign*val*power2)/power;
}
