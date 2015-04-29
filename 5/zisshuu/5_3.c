#include <stdio.h>
char input[100];
float width;
float height;
int main(){
  printf("input width?:");
  fgets(input, sizeof(input), stdin);
  sscanf(input,"%f",&width);
  printf("input height?:");
  fgets(input, sizeof(input), stdin);
  sscanf(input,"%f",&height);
  printf("外周 is %f",(width + height) * 2.0);
  return(0);
}
