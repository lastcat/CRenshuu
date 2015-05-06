#include <stdio.h>
#define SQR(x) (x*x)
#define T_SQR(x) ((x)*(x))
int main(){
  int counter;

  for(counter = 0; counter < 5; ++counter){
    printf("x %d, x squared %d\n", counter+1, SQR(counter+1));
  }
  //マクロ展開すると(counter + (1 * counter) + 1)となるので期待する結果と異なる
  //正しくはT_SQRのように先に引数を評価してしまうように()で囲む必要がある
  for(counter = 0; counter < 5; ++counter){
    printf("x %d, x squared %d\n", counter+1, T_SQR(counter+1));
  }

  return 0;
}
