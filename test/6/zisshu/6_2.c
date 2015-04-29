#include <stdio.h>
#include <stdlib.h>
int point;
char input[100];
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
    printf("D\n");
    exit(1);
  }
  if(point <= 80){
    printf("C\n");
    exit(1);
  }
  if(point <= 90){
    printf("B\n");
    exit(1);
  }
  if(point <= 100){
    printf("A\n");
    exit(1);
  }
  else
    printf("this point is out of range.\n");

}
