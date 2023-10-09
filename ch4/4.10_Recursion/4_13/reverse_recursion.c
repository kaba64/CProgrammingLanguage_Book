#include <stdio.h>

/* The recursive version of reverse function : reverse string s in place
   Oct. 9, 2023
   Kazem Bazesefidpar */

void reverse_recursive(char s[],int low,int high)
{ 
  char temp;

  if(low<high){
    temp=s[high];
    s[high]=s[low];
    s[low]=temp;
    low+=1;
    high-=1;
    reverse_recursive(s,low,high);
  }
}
