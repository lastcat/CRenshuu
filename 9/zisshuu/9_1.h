#include <string.h>
//文字列中の語の数をcountする関数
//「語」の定義は空白で区切られていること
int count_word(char str[]){
  int i;
  int whitespace_count = 0;
  for(i = 0; i < strlen(str); i++){
    if(str[i] == ' ')
      whitespace_count++;
  }
  return whitespace_count + 1;
}
