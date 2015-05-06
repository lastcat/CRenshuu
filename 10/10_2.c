
#include <stdio.h>
//コンパイルが通らない
//#define MAX =10
#define MAX 10

int main(){
  int counter;

  for(counter =MAX; counter > 0; --counter)
    printf("Hi there\n");

  return 0;
}
