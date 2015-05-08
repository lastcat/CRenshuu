#include <stdio.h>
int i;
int j;
int printH(){
  for(i = 0; i < 3; i++){
    printf("*   *\n");
  }
  printf("*****\n");
  for(i = 0; i < 3; i++){
    printf("*   *\n");
  }
}

int printE(){
  for(i = 0; i < 2; i++){
    for(j = 0;j < 5; j++){
      printf("*");
    }
    printf("\n");
    printf("*\n");
    printf("*\n");
  }
  for(i = 0;i < 5; i++){
    printf("*");
  }
  printf("\n");
}

int printL(){
  for(i = 0 ; i < 6; i++){
    printf("*\n");
  }
  printf("*******\n");
}

int printO(){
  printf("*****\n");
  for(i = 0; i < 5; i++){
    printf("*   *\n");
  }
  printf("*****\n");
}
int main(){
  printH();
  printf("\n");
  printE();
  printf("\n");
  printL();
  printf("\n");
  printL();
  printf("\n");
  printO();
}
