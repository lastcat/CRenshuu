#include <stdio.h>
int array[3][2];
int main(){
  int x,y;
  array[0][0] = 0 * 10 + 0;
  array[0][1] = 0 * 10 + 1;
  array[1][0] = 1 * 10 + 0;
  array[1][1] = 1 * 10 + 1;
  array[2][0] = 2 * 10 + 0;
  array[2][1] = 2 * 10 + 1;
  printf("array[%d]\n", 0);
  printf("%d ", array[0][0]);
  printf("%d ", array[0][1]);
  printf("\n");
  printf("%d ", array[1][0]);
  printf("%d ", array[1][1]);
  printf("\n");
  printf("%d ", array[2][0]);
  printf("%d ", array[2][1]);
  printf("\n");
  return(0);
}
