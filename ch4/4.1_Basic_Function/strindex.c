int strrindex(char s[],char t[]){
  // s : in string
  // t : the search characters
  int i,j,k;

  for(i=0;s[i]!='\0';i++){
    for(j=i, k=0;t[k]!='\0' && s[j]==t[k];j++,k++)
      ;
    if(k>0 && t[k]=='\0')
      return i;
  }
  return -1;
}
