#include <string.h>

bool begins(char str1[], char str2[]){
  int i;
  for(i = 0; i < strlen(str2) - 1; i++){
    if(str1[i] != str2[i])
      return false;
  }
  return true;
}
