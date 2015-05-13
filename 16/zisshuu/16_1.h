#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//変換のみ。演算は省略
int nth_digit(double num, int digit){
  if(num < 0)
    num = num * -1.0;
  double x = num;
  int z = 0;
  if(x >= 1){
    while(x > 10){
      x /= 10;
      z++;
    }
  }
  else{
    while(x < 1){
      x *= 10;
      z--;
    }
  }
  if(digit == 1){
    //誤差許容範囲
    return (int)(x + 0.0000000001);
  }
  else
    return nth_digit(num - (int)x * pow(10,z) , digit - 1);
}

int code(double num){
  char code;
  if(num > 0.0)
    code = '+';
  else
    code = '-';
}

int sisuu(double num){
  if(num < 0)
    num = num * -1.0;
  double x = num;
  int z = 0;
  if(x >= 1){
    while(x > 10){
      x /= 10;
      z++;
    }
  }
  else{
    while(x < 1){
      x *= 10;
      z--;
    }
  }
  return z;
}

int read_as_str(double num, char result[]){
  char code;
  if(num > 0)
    code = '+';
  else
    code = '-';
  int first_digit = nth_digit(num, 1);
  int second_digit = nth_digit(num, 2);
  int third_digit = nth_digit(num, 3);
  int fourth_digit = nth_digit(num, 4);
  int sisuubu = sisuu(num);
  char sisuubu_str[3];
  if(sisuubu > 0)
    sprintf(sisuubu_str,"+%d", sisuubu);
  else
    sprintf(sisuubu_str, "%d", sisuubu);

  sprintf(result, "%c%d.%d%d%dE%s",code,first_digit, second_digit, third_digit, fourth_digit, sisuubu_str);
  return 0;

}

int char_to_int(char ch){
  switch(ch){
    case '1':
      return 1;
    case '2':
      return 2;
    case '3':
      return 3;
    case '4':
      return 4;
    case '5':
      return 5;
    case '6':
      return 6;
    case '7':
      return 7;
    case '8':
      return 8;
    case '9':
      return 9;
    case '0':
      return 0;
  }
}

double write_as_double(char str[]){
  //[+/-]x.yyyE+zの形
  char code  = str[0];
  int first_d = char_to_int(str[1]);
  int second_d = char_to_int(str[3]);
  int third_d = char_to_int(str[4]);
  int fourth_d = char_to_int(str[5]);
  char code_e = str[7];
  int sisuu = char_to_int(str[8]);

  double num = 1 * first_d +
              0.1 * second_d +
              0.01 * third_d +
              0.001 * fourth_d;
  if(code_e == '+')
    num *= pow(10, sisuu);
  else
    num *= pow(10, -1 * sisuu);
  if(code == '+')
    return num;
  else
   return num * -1.0;
}
