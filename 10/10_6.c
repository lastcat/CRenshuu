#include <stdio.h>
#define SQR(x) ((x)*(x))

int main(){
  int counter;

  counter = 0;

  while(counter < 5)
  //counterマクロ内で二回評価され、その度にcounterの値が増加してしまっている
    printf("x %d square %d\n", counter, SQR(++counter));

  return 0;
}
