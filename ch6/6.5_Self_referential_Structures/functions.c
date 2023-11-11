#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "structc.h"

#define BUFSIZE 100
char buf[BUFSIZE];   /* buffer for ungetch */
int bufp = 0;        /* next free position in buf */

int getch(void) /* get a (possibly pushed-back) character */
{
  return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c)    /* push character back on input */
{
  if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}
/* The example of the book page 136
   getword: get next word or character from input */
int getword(char *word, int lim){
  int c;
  char *w = word;
  while (isspace(c = getch()))
    ;
  if (c != EOF)
    *w++ = c;
  if (!isalpha(c)) {
    *w = '\0';
    return c;
  }
  for ( ; --lim > 0; w++)
    if (!isalnum(*w = getch())){
      ungetch(*w);
      break;
    }
  *w = '\0';
  return word[0];
}

/* treeprint: in-order print of tree p > page 142 of the book*/
void treeprint(struct tnode *p){
  if (p != NULL) {
    treeprint(p->left);
    printf("%4d %s\n", p->count, p->word);
    treeprint(p->right);
  }
}

/* talloc: make a tnode > page 142 of the book*/
struct tnode *talloc(void){
  return (struct tnode *) malloc(sizeof(struct tnode));
}

/* make a duplicate of s > page 143 of the book*/
char *strdup(char *s){
  char *p;
  p = (char *) malloc(strlen(s)+1); /* +1 for '\0' */
  if (p != NULL)
    strcpy(p, s);
  return p;
}

/* addtree: add a node with w, at or below p > page 141 of the book*/
struct tnode *addtree(struct tnode *p, char *w){
  int cond;
  if (p == NULL) {       /* a new word has arrived */
    p = talloc();        /* make a new node */
    p->word = strdup(w);
    p->count = 1;
    p->left = p->right = NULL;
  } else if ((cond = strcmp(w, p->word)) == 0)
    p->count++;        /* repeated word */
  else if (cond < 0)   /* less than into left subtree */
    p->left = addtree(p->left, w);
  else                /* greater than into right subtree */
    p->right = addtree(p->right, w);
  return p;
}
