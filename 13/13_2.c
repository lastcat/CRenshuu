#include <stdio.h>
#include <string.h>

char *tmp_name(void){
  static int sequence = 0;
  static char name[30];

  ++sequence;

  strcpy(name, "tmp");

  name[3] = sequence + '0';

  name[4] ='\0';

  return(name);
}

int main(){
  char *tmp_name(void);
  //char *name1;
  //char *name2;
  char name1[5];
  char name2[5];
//ptrとして同じ場所を刺してしまっているので、両方tmp2になる（後の変更が適用される)
  //name1 = tmp_name();
  //name2 = tmp_name();
  //配列として宣言してstrcpyすればよい。
  strcpy(name1, tmp_name());
  strcpy(name2, tmp_name());

  printf("Name1: %s\n", name1);
  printf("Name2: %s\n", name2);
  return (0);
}
