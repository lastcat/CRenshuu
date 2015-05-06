#include <string.h>

void hyphen_to_underscore(char str[]){
  int i;
  for(i = 0; i < strlen(str); i++){
    if(str[i] == '-')
      str[i] = '_';
  }
}
