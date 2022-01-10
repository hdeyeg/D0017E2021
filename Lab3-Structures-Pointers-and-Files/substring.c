#include <stdio.h>
#include <string.h>

void substring (char *s, int start, int count, char result[]){
  int i = 0;

    while (i < count) {
      result[i] = s[start+i];
      ++i;
    }
    result[i] = '\0';
}