#include <stdio.h>
char input[100];
float km_to_mile;
int main(){
  printf("input km/h:");
  fgets(input, sizeof(input), stdin);
  sscanf(input,"%f",&km_to_mile);
  printf("to mile is %f", km_to_mile * 0.6213712);
  return(0);
}
