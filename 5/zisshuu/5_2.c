#include <stdio.h>
float r;
char input[100];
const float PI = 3.14;
int main(){
  printf("半径 is:");
  fgets(input, sizeof(input), stdin);
  sscanf(input, "%f", &r);
  printf("球の体積は%f\n", (4.0 / 3.0) * PI * (r * r * r)  );
}
