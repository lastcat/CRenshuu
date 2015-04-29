#include <stdio.h>
char input[100];
int minites;
int main(){
  printf("input 分:");
  fgets(input,sizeof(input),stdin);
  sscanf(input,"%d分",&minites);
  printf("時間に直すと%d時間%d分\n",minites / 60, minites % 60);
}
