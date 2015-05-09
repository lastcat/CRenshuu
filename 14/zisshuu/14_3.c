#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//fileというのは文字列にすぎない
//入力ファイルは,区切りだと仮定する
//ファイルの大きさがわからない以上、開きっぱにして書き込みまくる方が良さそう
int parse_string_by_conma(char str[], int numbers[]){
  char *num = strtok(str, ",");
  numbers[0] = atoi(num);
  int i = 1;
  while(1){
    num = strtok(NULL, ",");
    if(num == NULL)
      break;
    numbers[i] = atoi(num);
    i++;
  }
  return i;
}

int main(int argc, char *argv[]){
  FILE *input, *three_dividable, *others;
  input = fopen(argv[1], "r");
  three_dividable = fopen("three_dividable.txt", "w");
  others = fopen("others.txt", "w");

  while(1){
    char* str_ptr;
    char str[100];
    int numbers[100];
    str_ptr = fgets(str, 99, input);
    if(str_ptr == NULL)
      break;

    int size = parse_string_by_conma(str, numbers);

    for(int i = 0; i < size; i++){
      if(numbers[i]%3 == 0)
        fprintf(three_dividable, "%d ", numbers[i]);
      else
      fprintf(others, "%d ", numbers[i]);
    }
  }

  fclose(input);
  fclose(three_dividable);
  fclose(others);
  return 0;
}
