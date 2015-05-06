#include <stdio.h>
//;まで展開されているせいで、FUDGEの文がSIZEの文で解釈を終了されている
#define SIZE 10;
#define FUDGE SIZE -2;

int main(){
  int size;

  size = FUDGE;
  printf("Size is %d\n", size);
  return 0;
}
