#include <string.h>

void expand(char s1[],char s2[]){
  // s1 : input string
  // s2 : expanded string
  int n1,j=0;
  n1 = strlen(s1);
  for(int i=0;i<n1;i++){
    if(s1[i]=='-'){
      if(i>0){
	//j--;
	if(((s1[i-1]>=97 && s1[i-1]<=122)&&(s1[i+1]>=97 && s1[i+1]<=122)) ||
	   ((s1[i-1]>=48 && s1[i-1]<=57)&&(s1[i+1]>=48 && s1[i+1]<=57)) ||
	   ((s1[i-1]>=65 && s1[i-1]<=90)&&(s1[i+1]>=65 && s1[i+1]<=90))){
	  int k, m=s1[i-1]+1;
	  for(k=j;k<j+s1[i+1]-s1[i-1];k++){
	    s2[k]=m;
	    m++;
	  }
	  j=k;
	}
      }
    }
    else if(s1[i-1]=='-' && i!=1){
      if(i==n1-1)
	s2[j]='\0';
    }
    else{
      s2[j]=s1[i];
      j++;
    }
  }
}
