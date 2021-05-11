#include <stdio.h>
#include <string.h>
int pattern_match(char[],char[]);

int main() {
  char a[100], b[100];
  int pos;

  printf("Enter the Source String:\n");
  gets(a);

  printf("Enter the Pattern to find : \n");
  gets(b);

  pos=pattern_match(a, b);

  if(pos!= -1) {
    printf("The Pattern is found at the location: %d\n", pos+1);
  }
  else {
    printf("Pattern not Found\n");
  }

  return 0;
}

int pattern_match(char text[], char pattern[]) {
  int i,j,k, text_length, pattern_length, pos= -1;

  text_length    = strlen(text);
  pattern_length = strlen(pattern);

  if (pattern_length > text_length) {
    return -1;
  }

  for (i=0; i<=text_length-pattern_length;i++) {
    pos=k=i;

    for (j=0;j<pattern_length;j++) {
      if (pattern[j] == text[k]) {
        k++;
      }
      else {
        break;
      }
    }
    if (j== pattern_length) {
      return pos;
    }
  }

  return -1;
}
