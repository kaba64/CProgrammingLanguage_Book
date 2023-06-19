/*
  Returns the first location in the s1 where any character of s2 occurs
*/

int any(char s1[],char s2[])
{
  int i=0,j=0,k=0;

  for(k=0;s2[k]!='\0';k++){
    for(i=j=0;s1[i]!='\0';i++)
      {
        if(s1[i]==s2[k])
          return i;
      }
  }
  return -1;
}
