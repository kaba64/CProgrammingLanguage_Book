/* strcat from book page 48
   The pointer version of strcat is strcat_p
   The s must big enough to write t to the end of s
   Kazem Bazesefdpar
   November 1, 2023*/

void strcat(char s[],char t[]){
  int i,j;
  i=j=0;
  while(s[i]!='\0') // find the end of s
    i++;
  while((s[i++]=t[j++])!='\0') // copy t to the end of s
    ;
}

void strcat_p(char *s,char *t){
  while(*s) // find the end of s
      s++;
  while(*s = *t) // copy t to the end of s
    {
      s++;
      t++;
    }
}

