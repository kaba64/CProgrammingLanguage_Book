/*The code reads the input.txt by redirecting : ./out (U or L)<input.txt
  use L or U without ()
  The output will be uppercase or lowercase depending on U or L
  Kazem Bazesefidpar
  November 13, 2023
*/
#include <stdio.h>
#include <ctype.h>

#define NSIZE 10000

int main(int argc,char *argv[]){
  char read_file[10000],c;
  unsigned int size=0;
  
  while((read_file[size++]=getchar())!=EOF)
    ;
  read_file[size-1] = '\0';
  if(*argv[1]=='L')
    for(int unsigned i=0;i<=size;++i)
      putchar(tolower(read_file[i]));
  if(*argv[1]=='U')
    for(int unsigned i=0;i<=size;++i)
      putchar(toupper(read_file[i]));
  return 0;
}
