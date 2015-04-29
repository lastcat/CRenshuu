#include <stdio.h>
int sum;
char input[100];
int main(){
  fgets(input, sizeof(input), stdin);
  sscanf(input, "%d", &sum);
  printf("25セントが%d枚,10セントが%d枚,5セントが%d枚,1セントが%d枚\n",sum/25,sum%25/10,sum%25%10/5,sum%25%10%5/1);
}
