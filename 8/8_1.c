#include <stdio.h>
int celsius;
int main(){
  //(コンパイラが警告してくれてるけど)forに;をつけるとforブロックがそこで終了する
  for(celsius = 0; celsius <= 100; ++celsius);
    printf("Celsius:%d Fahrenheit:%d\n",celsius,(celsius * 9)/5+32);
  //これなら良い
  //(コンパイラが警告してくれてるけど)forに;をつけるとforブロックがそこで終了する
  for(celsius = 0; celsius <= 100; ++celsius){
    printf("Celsius:%d Fahrenheit:%d\n",celsius,(celsius * 9)/5+32);
  }
}
