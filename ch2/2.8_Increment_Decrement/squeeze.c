/*
  Removing all the occurence of the s2 from s1
*/

void squeeze(char s1[],char s2[])
{
  int i=0,j=0,k=0;

  for(k=0;s2[k]!='\0';k++){
    for(i=j=0;s1[i]!='\0';i++)
      {
        if(s1[i]!=s2[k])
          s1[j++]=s1[i];
      }
    s1[j]='\0';
  }
}
