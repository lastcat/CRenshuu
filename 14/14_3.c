#include <stdio.h>
#include <stdlib.h>
#ifdef __MSDOS__
#define __UNIX__
#endif /*__MSDOS__*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#ifndef O_BINARY
#define O_BINARY 0
#endif /*O_BINARY*/

#define BUFFER_SIZE (16 * 1024)
int main(int argc, char *argv[]){
  char buffer[BUFFER_SIZE];
  int in_file;
  int out_file;
  int read_size;

  if(argc != 3){
    fprintf(stderr, "Error:Wrong number of arguments\n");
    fprintf(stderr, "Usage is: copy <from> <to>\n");
    exit(8);
  }
  in_file = open(argv[1], O_RDONLY|O_BINARY);
  if(in_file < 0){
    //引数の型がおかしい.fprintfの最初の引数はファイル
    fprintf(stderr, "Error:Unable to open %s\n", argv[1]);
    exit(8);
  }
  out_file = open(argv[2], O_WRONLY|O_TRUNC|O_CREAT|O_BINARY, 0666);

  if(out_file < 0){
    fprintf("Error:Unable to open %s\n", argv[2]);
    exit(8);
  }

  while(1){
    read_size = read(in_file, buffer, sizeof(buffer));

    if(read_size == 0)
      break;

    if(read_size < 0){
      fprintf(stderr, "Error:Read error\n");
      exit(8);
    }
    write(out_file, buffer, (unsigned int) read_size);
  }
  close(in_file);
  close(out_file);
  rertun (0);
}
