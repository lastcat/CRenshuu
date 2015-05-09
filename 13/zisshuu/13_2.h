#include <stdio.h>
#include <stdlib.h>

char* find_not_space_chara(char str[], int length){
  for(int i = 0; i < length; i++){
    if(str[i] != ' ')
      return (str + i);
    if(str[i] == '\0'){
      printf("can't find not space character\n");
      exit(8);
    }
  }
}
