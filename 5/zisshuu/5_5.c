#include <stdio.h>
char input[100];
int hours;
int minites;
int main(){
  printf("input 時間、分:");
  fgets(input,sizeof(input),stdin);
  sscanf(input,"%d時間%d分",&hours,&minites);
  printf("分に換算すると%d分\n",hours * 60 + minites);
  return(0);
}
