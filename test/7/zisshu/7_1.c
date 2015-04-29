#include <stdio.h>
char input[100];
float mile;
int main(){
  fgets(input, sizeof(input), stdin);
  sscanf(input, "%f", &mile);
  printf("メートルにすると%fm\n", mile * 1609.344);
}
