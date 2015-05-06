#include <stdio.h>
//spaceをあけるとマクロの引数として認識されない。そのため文字列がそのまま置換されて未定義警告が出る
#define RECIPROCAL (number) (1.0 / (number))
#define T_RECIPROCAL(number) (1.0 / (number))

int main(){
  float counter;

  for(counter = 1.0; counter < 10.0; counter += 1.0){
    printf("1/%f = %f\n", counter, T_RECIPROCAL(counter));
  }

  return 0;
}
