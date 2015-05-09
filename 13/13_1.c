#include <stdio.h>
#include <string.h>

char *tmp_name(void){
  //charはローカル変数のため、関数を抜けると解放されてしまい、未定義の値を指す
  //static指定してしまえば、返した後も値を保持し続けてくれる。
  static char name[30];
  static int sequence = 0;

  ++sequence;

  strcpy(name, "tmp");

  name[3] = sequence + '0';

  name[4] ='\0';

  return(name);
}

int main(){
  char *tmp_name(void);

  printf("Name: %s\n", tmp_name());
  return (0);
}
