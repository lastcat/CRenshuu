#include <stdio.h>
int workHour;
char input[100];
int zangyoH;
int main(){
  fgets(input, sizeof(input), stdin);
  sscanf(input, "%d", &workHour);
  if(workHour >= 40)
    zangyoH = workHour - 40;
  else
    zangyoH = 0;
  printf("労働時間%d,そのうち残業%d。換算労働時間は%f\n",workHour,zangyoH,workHour + zangyoH * 1.5);
}
