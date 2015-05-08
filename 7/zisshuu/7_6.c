#include <stdio.h>
//対話式ver.
char input[100];
int main(){
  int naturalNum = 0;
  int minorNum = 0;
  int num;
  char finish;
  while(1){
    fgets(input,sizeof(input),stdin);
    sscanf(input,"%d",&num);
    if(num >= 0)
      naturalNum++;
    else
      minorNum++;
    printf("finish? y/n:");
    fgets(input,sizeof(input),stdin);
    sscanf(input,"%c",&finish);
    if(finish == 'y')
      break;
  }
  printf("正の数%d個,負の数%d個\n", naturalNum, minorNum);
}
