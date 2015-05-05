#include "8_6.h"
//後で設計図書いて考えるけど、まあパターン分けめんどくさいくらいで作業っぽい。
char* first_digit_pattern(int number){
  switch(number){
    case 1:
      return "one";
      break;
    case 2:
      return "two";
      break;
    case 3:
      return "three";
      break;
    case 4:
      return "four";
      break;
    case 5:
      return "five";
      break;
    case 6:
      return "six";
      break;
    case 7:
      return "seven";
      break;
    case 8:
      return "eight";
      break;
    case 9:
      return "nine";
      break;
    case 0:
      return "";
      break;
    default:
      return "invalid number";
      break;
  }
}

char* second_digit_pattern(int num){
    switch(num){
      case 2:
      return "twenty ";
      case 3:
      return "thirty ";
      case 4:
      return "fourty ";
      case 5:
      return "fifty ";
      case 6:
      return "sixty ";
      case 7:
      return "seventy ";
      case 8:
      return "eighty ";
      case 9:
      return "ninety ";
    }
}

void teen_case(int num, char *result){
  switch(num){
    case 10:
    strcpy(result, "ten");
    break;
    case 11:
    strcpy(result, "eleven");
    break;
    case 12:
    strcpy(result, "twelve");
    break;
    case 13:
    strcpy(result, "thirteen");
    break;
    case 14:
    strcpy(result, "fourteen");
    break;
    case 15:
    strcpy(result, "fifteen");
    break;
    case 16:
    strcpy(result, "sixteen");
    break;
    case 17:
    strcpy(result, "seventeen");
    break;
    case 18:
    strcpy(result, "eighteen");
    break;
    case 19:
    strcpy(result, "nineteen");
    break;
  }
}


void normal_case(int digit, int array[], char* result){
  if(digit == 2){
    strcpy(result, second_digit_pattern(array[0]));
    if(array[1] != 0)
      strcat(result, first_digit_pattern(array[1]));
    else
      result[strlen(result) - 1] = NULL;
  }
  else{
    strcpy(result, first_digit_pattern(array[0]));
    if(array == 0)
      strcpy(result, "zero");
  }
}
void convert_int_to_english(int num, char* result){
//-----------------ここから------------------------------

  //入力桁数を取得
  int digit = digit_number(num);
  //動的に配列を取得(そうでないと終端0の判別がつかない)
  int *array = (int*)malloc(sizeof(int) * digit);
  char tmp[100];
  //数字を桁ごとに分解して配列に入れる(桁は逆順)
  split_to_int_array(num, array);
//--------------ここまでは共通処理-------------------------
  if(num == 100)
    strcpy(result, "one hundred");
  else if(num > 19){
    normal_case(digit, array, result);
  }
  else if (num > 9){
    teen_case(num, result);
  }
  else
    normal_case(digit, array, result);

}
