#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_new_line(char str[], int size){
  for(int i = 0; i < size; i++){
    if(str[i] == '\n')
      str[i] = '\0';
  }
}

int main(){
  char name[100];
  FILE *in_file;

  printf("Name? ");
  //fgtesは改行も読み込むので、そのままだとファイル名と合致しない
  fgets(name, sizeof(name), stdin);
  remove_new_line(name, strlen(name));

  in_file = fopen(name, "r");
  if(in_file == NULL){
    fprintf(stderr, "Could not open file\n");
    exit(8);
  }
  printf("File found\n");
  fclose(in_file);
  return (0);
}
