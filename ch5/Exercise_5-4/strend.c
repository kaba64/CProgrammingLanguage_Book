/* The strend returns 
   1 : if t occurs at the end of s
   0 : if t does not occurs at the end of s
   Kazem Bazesefdpar
   November 1, 2023*/

int strend(char *s,char *t){
  char *temp_t = t;
  
  while(*s!=*t && *s!='\0')
    s++;
  while(((*temp_t!='\0') && (*s!='\0')) && *temp_t==*s){
    s++;
    temp_t++;
  }
  if(*s=='\0'){
    if(*temp_t=='\0')
      return 1;
    else
      return 0;
  }else{
    strend(s,t);
  }
}

