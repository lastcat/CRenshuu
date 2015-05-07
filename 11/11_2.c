#include <stdio.h>
//動作しないというか、無限ループになる。
//charがsignedなので、0x80が-128になり、右bitシフトが最大bit(符号)を保ったままシフトしてしまうので
//loopが終わらない
int main(){
  short int i;
  //unsigned char ch;//なら止まる
  signed char ch;

  for(i = 0x80; i != 0; i = (i >> 1)){
    printf("i is %x (%d)\n", i, i);
  }

  for(ch = 0x80; ch != 0; ch = (ch >> 1)){
    printf("ch is %x (%d)\n", ch, ch);
  }

  return 0;
}
