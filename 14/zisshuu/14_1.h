#include <stdio.h>

int count_line(FILE *file){
  int count = 0;
  while(1){
    char ch;
    ch = fgetc(file);
    if(ch == EOF)
      return count;
    if(ch == '\n')
      count++;
  }
}
