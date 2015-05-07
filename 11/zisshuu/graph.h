#include <stdio.h>

#define X_SIZE 40
#define Y_SIZE 40

//1画素1bitでなのでバイト数は/8の結果になる(x)
char graphics[X_SIZE / 8][Y_SIZE]; //グラフィックスデータ

#define SET_BIT(x,y) graphics[(x)/8][y] |= (0x80 >> ((x)%8))

void printf_graphics(void){
  int x;
  int y;
  unsigned int bit;

  for(y = 0; y < Y_SIZE; ++y){
    //各byteに対してのループ
    for(x = 0; x < X_SIZE / 8; ++x){
      //各bitに対してのループ
      for(bit = 0x80; bit > 0; bit = (bit >> 1)){
        if((graphics[x][y] & bit) != 0)
          printf("X");
        else
          printf(".");
      }
    }
    printf("\n");
  }
}
/*
int main(){
  int loc;

  for(loc = 0; loc < X_SIZE; ++loc){
    SET_BIT(loc, loc);
  }

  printf_graphics();
  return 0;
}
*/
