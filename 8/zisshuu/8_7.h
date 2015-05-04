#include "8_6.h"
//後で設計図書いて考えるけど、まあパターン分けめんどくさいくらいで作業っぽい。
void second_digit_pattern(int num, char *result){
    switch(num){
      case 2:
      strcpy(result, "twelve");
      case 3:
      strcpy(result, "thirty");
      case 4:
      strcpy(result, "fourty");
      case 5:
      strcpy(result, "fifty");
      case 6:
      strcpy(result, "sixty");
      case 7:
      strcpy(result, "seventy");
      case 8:
      strcpy(result, "eighty");
      case 9:
      strcpy(result, "ninety");
    }
}

void convert_int_to_english_word(int num, char* result){
//-----------------ここから------------------------------
  //入力桁数を取得
  int digit = digit_number(num);
  //動的に配列を取得(そうでないと終端0の判別がつかない)
  int *array = (int*)malloc(sizeof(int) * digit);
  char tmp[100];
  //数字を桁ごとに分解して配列に入れる(桁は逆順)
  split_to_int_array(num, array);
  //数字配列を数字の文字配列に変換する
  int_array_to_char_array(array, tmp, digit);
//--------------ここまでは共通処理-------------------------
  if(num == 100)
    strcpy(result, "one hundred");
  else if(num > 19){
    greater_than_twelve_case(tmp, digit, result);
  }
  else if (num > 9){
    teen_case(tmp, digit, result);
  }
  else
    one_digit_case(tmp, digit, result);

}
