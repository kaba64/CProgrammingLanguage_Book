#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "structc.h"
#include "functions.h"

#define MAXWORD 100

int main(int argc, char *argv[]){

  struct tnode *root;
  char word[MAXWORD];
  root = NULL;
  while (getword(word, MAXWORD) != EOF)
    if (isalpha(word[0]))
      root = addtree(root, word);
  treeprint(root);
  return 0;
}
