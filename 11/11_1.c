#include <stdio.h>

const int HIGH_SPEED = (1<<7);
const int DIRECT_CONNECT = (1<<8);

/*DEBUG用 charをintに変えてforのindex初期値を31にしても使える */
void display_char_in_binary(char num){
  int i;
  for(i = 7; i > -1; i--){
    if(num & ( 1 << i ))
      printf("1");
    else
     printf("0");
  }
  printf("\n");
}
//自分の処理系(Apple LLVM version 6.0 (clang-600.0.56))だと、charは符号ありだったので、
//flags |= HIGH_SPEEDは-128となり、intで表すと11111111111111111111111110000000となり、
//DIRECT_SPEEDにも引っかかってしまった。
char flags = 0;
//なので↓のようにunsigend charにすれば(そもそも別にintにしても良いが)望む結果は得られる。
//unsigned　char flags = 0;
int main(){
  flags |= HIGH_SPEED;
  flags |= DIRECT_CONNECT;

  if((flags & HIGH_SPEED) != 0)
    printf("High speed set\n");

  if((flags & DIRECT_CONNECT) != 0)
    printf("Direct connect set\n");
  return 0;
}
