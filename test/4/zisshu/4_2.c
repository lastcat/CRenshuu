#include <stdio.h>
int i = 0;
int j = 0;
int main(){
  /* (横一列＋縦二列) * 2 */
  for(j = 0; j < 2; j++){
    for(i = 0;i < 5; i++){
      printf("*");
    }
    printf("\n");
    printf("*\n");
    printf("*\n");
  }
  /*最後一列*/
  for(i = 0;i < 5; i++){
    printf("*");
  }
  printf("\n");
}
