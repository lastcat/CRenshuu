#include <stdio.h>

//即returnしてるので0しか返らない
int length(char string[]){
  int index;
  for(index = 0; string[index] != '\0'; ++index){
    return (index);
  }
}

//returnを外におけば良い
int t_length(char string[]){
  int index;
  for(index = 0; string[index] != '\0'; ++index){
  }
  return (index);
}

int main(){
  char line[100];
  while(1){
    printf("Enter line:");
    fgets(line, sizeof(line), stdin);

    printf("Length (including new line) is %d\n", t_length(line));
  }
  return 0;
}
