//参考:http://sunafukin2go.hatenablog.com/entry/2014/06/11/003735
//要するに32bitを解釈する関数を書けば良い
//上位より、1bit符号部15bit整数部、16bit少数部
#include <stdio.h>
int show_bits(unsigned int num){
  printf("bits:");
  for(int i = 31; i > -1; i--){
    printf("%d", ((num >> i) & 1));
  }
  printf("\n");
}

int nth_bit(unsigned int num, int nth){
  //show_bits(num);
  //show_bits((1 << (nth - 1)));
  return ((num >> nth) & 1);
}

double nth_divide(int nth){
  double result = 1.0;
  for(int i = 0; i < nth; i++){
    result /= 2.0;
    printf("nth_devide:%lf\n", result);
  }
  return result;
}

double to_double(unsigned int num){
  int sign;
  if(nth_bit(num, 31) == 0)
    sign = 1;
  else
    sign = -1;

  //整数部
  int integral = 0;
  for(int i = 16; i < 31; i++){
    if(nth_bit(num, i)){
      integral += (1 << ( i - 15 ));
      printf("integral + %d, %dbit hit\n",(1 << ( i - 15 )), i);
    }
  }
  //少数
  double decimal = 0.0;
  for(int i = 15; i > -1; i--){
    if(nth_bit(num, i)){
      decimal += nth_divide( 15 - i );
      printf("decimal + %lf, %dbit hit\n", nth_divide( i- 16 ), i);
    }
  }
  return sign * (integral + decimal);
}
