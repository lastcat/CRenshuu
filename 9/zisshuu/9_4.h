#include <string.h>

int hash_of_string(char str[]){
  int hash = 0;
  int i;
  for(i = 0; i < strlen(str) ; i++){
    hash += str[i];
  }
  return hash;
}
