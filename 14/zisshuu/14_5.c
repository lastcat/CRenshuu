#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[]){
  FILE *from;
  FILE *to;

  from = fopen(argv[1],"r");
  to = fopen(argv[2], "w");

  while(1){
    char ch = fgetc(from);
    if(ch == EOF)
      break;
    if((ch & 0x80) != 0)
      continue;
    fputc(ch, to);
    printf("errno:%d\n", errno);
  }
}
