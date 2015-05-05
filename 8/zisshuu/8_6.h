#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//数字を文字列に変換
char* convert_to_word(int number){
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
      return "zero";
      break;
    default:
      return "invalid number";
      break;
  }
}

//数字の文字配列を一つずつwordにして結合してresultにして返す
void convert_to_string(int numbers[], int size, char result[]){
  char string[100] = "";
  int i;
  strcat(string, convert_to_word(numbers[0]));
  for(i = 1; i < size; i++){
    strcat(string, " ");
    strcat(string, convert_to_word(numbers[i]));
  }
  strcpy(result,string);
}

int digit_number(int num){
  //数字の桁数
  int digit_number = 0;
  int digit_confirmer = 1;
  while(num / digit_confirmer > 0){
    digit_number += 1;
    digit_confirmer *= 10;
  }
  return digit_number;
}

//桁数番目の数字を返す
int number_of_digit_order(int num, int digit){
  return (num % (int)pow(10, digit)) / pow(10, digit - 1);
}

//桁数ごとに分解して文字配列に一つずつ入れる
void split_to_int_array(int num, int *num_array){
  int digit = digit_number(num);
  int i;
  for(i = 0; i < digit; i++){
    num_array[i] = number_of_digit_order(num,digit - i);
  }
}

//数字の配列を数字の文字の配列に変換
void int_array_to_char_array(int i_array[], char* c_array, int size){
  int i;
  char tmp[2];
  for(i = 0; i < size; i++){
    sprintf(tmp, "%d", i_array[i]);
    c_array[i] = tmp[0];
  }
}

//数字を単語の文字列に変換
void convert_int_to_text(int num, char* result){
  //入力桁数を取得
  int digit = digit_number(num);
  //動的に配列を取得(そうでないと終端0の判別がつかない)
  int *array = (int*)malloc(sizeof(int) * digit);
  char tmp[100];
  //数字を桁ごとに分解して配列に入れる(桁は逆順)
  split_to_int_array(num, array);
  //数字配列を単語の組み合わせにする
  convert_to_string(array, digit, result);
  //解放
  free(array);
}
