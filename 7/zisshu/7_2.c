#include <stdio.h>
char before[100];
int beforeY,beforeM,beforeD;
int afterY,afterM,afterD;

int jan = 31
int feb = 28;
int mar = 31;
int apr = 30;
int may = 31;
int jun = 30;
int jul = 31;
int aug = 31;
int sep = 30;
int oct = 31;
int nov = 30;
int dec = 31;

int main(){
  //入力　before -> afterのvalidationだるいので省略。
  printf("before:");
  fgets(input, sizeof(input), stdin);
  sscanf(input, "%d %d %d",&bedoreY, &beforeM, &beforeD );
  printf("after:");
  fgets(input, sizeof(input), stdin);
  sscanf(input, "%d %d %d",&afterY, &afterM, &afterD );

  if(afterY > beforeY){
    //beforeの月末まで計算する
    //afterの月まで足す
    //afterの日にち分足す
  }
  else{
    //beforeの年末まで足す
    //afterの年始まで足す
    //afterの日付分足す
  }

}
