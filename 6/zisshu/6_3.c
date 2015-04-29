#include <stdio.h>
#include <stdlib.h>
int point;
char input[100];
void evalPoint(int point){
  if(point >=1 && point <= 3)
    printf("-\n");
  if(point >= 4 && point <= 7)
    printf("\n");
  if(point == 0 || (point >= 8 && point <= 9))
    printf("+\n");
}
int main(){
  printf("input 点数:");
  fgets(input, sizeof(input), stdin);
  sscanf(input, "%d", &point);
  if(point <= 0){
    printf("point should not be minus!\n");
    exit(1);
  }

  if(point>=0 && point <= 60){
    printf("F\n");
    exit(1);
  }
  if(point <= 70){
    printf("D");
    evalPoint(point % 10);
    exit(1);
  }
  if(point <= 80){
    printf("C");
    evalPoint(point % 10);
    exit(1);
  }
  if(point <= 90){
    printf("B");
    evalPoint(point % 10);
    exit(1);
  }
  if(point <= 100){
    printf("A");
    evalPoint(point % 10);
    exit(1);
  }
  else
    printf("this point is out of range.\n");

}
