#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#ifndef O_BINARY
#define O_BINARY 0
#endif /*O_BINARY*/

#define BUFFER_SIZE (16 * 1024)
const int tab_size = 4;

//指定文字以降をn文字ずらす
void shift_string(char str[], int from, int n){
  for(int i = strlen(str); i > from; i--){
    str[i+n] = str[i];
    str[i] = ' ';
  }
}


void tab_to_space(char str[]){
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == '\t'){
      str[i] = ' ';
      shift_string(str, i, tab_size - 1);
    }
  }
}

void tab_to_space_copy(char from[], char to[]){

  char buffer[BUFFER_SIZE];
  int in_file;
  int out_file;
  int read_size;

  in_file = open(from, O_RDONLY|O_BINARY);
  if(in_file < 0){
    //引数の型がおかしい.fprintfの最初の引数はファイル
    fprintf(stderr, "Error:Unable to open %s\n", from);
    exit(8);
  }
  out_file = open(to, O_WRONLY|O_TRUNC|O_CREAT|O_BINARY, 0666);
  if(out_file < 0){
    fprintf(stderr, "Error:Unable to open %s\n", to);
    exit(8);
  }

  while(1){
    read_size = read(in_file, buffer, sizeof(buffer));
    printf("before buffer:%s\n", buffer);

    if(read_size == 0)
      break;

    if(read_size < 0){
      fprintf(stderr, "Error:Read error\n");
      exit(8);
    }
    tab_to_space(buffer);
    printf("after buffer:%s\n", buffer);
    //ずれ多分余剰にsizeを足す
    write(out_file, buffer, (unsigned int) read_size+ 100);
  }
  close(in_file);
  close(out_file);
  return;
}
