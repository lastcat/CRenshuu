#include <stdio.h>
char input[100];
int celcius;
float kasi;
int main(){
  printf("input 摂氏:");
  fgets(input,sizeof(input),stdin);
  sscanf(input,"%d",&celcius);
  printf("kasi is %f",celcius * 5.0 / 9 + 32.0);
}
