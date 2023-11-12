#include <stdio.h>
#include <string.h>
#include "alloc_free.h"

#define MAXLEN 1000 /* max length of any input line */

/* getline: read a line into s, return length. from book chapter 1*/

int getline(char s[],int lim){
  int c, i;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
/* swap: interchange v[i] and v[j] */
void swap(char *v[], int i, int j)
{
  char *temp;
  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}
/* qsort: sort v[left]...v[right] into increasing order from book page 110*/
void qsort(char *v[], int left, int right)
{
  int i, last;
  if (left >= right) /* do nothing if array contains */
    return;          /* fewer than two elements */
  swap(v, left, (left + right)/2);
  last = left;
  for (i = left+1; i <= right; i++)
    if (strcmp(v[i], v[left]) < 0)
      swap(v, ++last, i);
  swap(v, left, last);
  qsort(v, left, last-1);
  qsort(v, last+1, right);
}

/* readlines: read input lines from book page 109*/
int readlines(char *lineptr[], int maxlines){
  int len, nlines;
  char *p, line[MAXLEN];

  nlines = 0;
  while ((len = getline(line, MAXLEN)) > 0)
    if (nlines >= maxlines || (p = alloc(len)) == NULL)
      return -1;
    else {
      line[len-1] = '\0'; /* delete newline */
      strcpy(p, line);
      lineptr[nlines++] = p;
    }
  return nlines;
}

/* writelines: write output lines */
void writelines(char *lineptr[], int nlines){
  int i;
  for (i = 0; i < nlines; i++)
    printf("%s\n", lineptr[i]);
}
