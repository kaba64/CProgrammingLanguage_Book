
void lower_case(char s[]){
  int i=0;
  
  for(i=0;s[i]!='\0';i++){
    s[i]=(s[i]>='A' && s[i]<='Z')?(s[i]+'a'-'A'):s[i];
  }
}
