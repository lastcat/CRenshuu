#include <stdio.h>
#include <stdlib.h>

#define DIE \
  fprintf(stderr, "Fetal Error:Abort\n");exit(8);

int main(){
  int value;

//ifは{}無しだと直後の一文しかifの中に含めないのでマクロ中のexit(8)はそのままだと含まれない
  value = 1;
  if(value < 0){
    DIE
  }
//のようにマクロ全体を{}で囲無必要がある
  printf("We did not die\n");
  return 0;
}
