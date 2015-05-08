#include <stdio.h>
float width;
float height;
float inch = 2.54;
int main(){
  width = 3.0 * inch;
  height = 5.0 * inch;
  printf("面積 is %f\n",width * height);
  width = 6.8 * inch;
  height = 2.3 * inch;
  printf("面積 is %f\n",width * height);
}
