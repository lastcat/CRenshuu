#include <stdio.h>
#define N_X_SIZE 16
#define N_Y_SIZE 10

char graphics[N_X_SIZE / 8][N_Y_SIZE];

#define CLEAR_BIT(x,y) (graphics[(x)/8][y] &= ~(0x80 >> ((x)%8)))
#define TEST_BIT(x,y) (graphics[(x)/8][y] & (0x80 >> ((x)%8)))
#define SET_BIT(x,y) (graphics[(x)/8][y] |= (0x80 >> ((x)%8)))

void printf_graphics(void){
  int x;
  int y;
  unsigned int bit;

  for(y = 0; y < N_Y_SIZE; ++y){
    //各byteに対してのループ
    for(x = 0; x < N_X_SIZE / 8; ++x){
      //各bitに対してのループ
      //2byte目は2bitしか使わない
      if(x == 0){
        for(bit = 0x80; bit > 0; bit = (bit >> 1)){
          if((graphics[x][y] & bit) != 0)
            printf("X");
          else
            printf(".");
        }
      }
      else{
        //2bit目まで
        for(bit = 0x80; bit > (1 << 5); bit = (bit >> 1)){
          if((graphics[x][y] & bit) != 0)
            printf("X");
          else
            printf(".");
        }
      }
    }
    printf("\n");
  }
}

int main(){
  int loc;

  for(loc = 0; loc < N_X_SIZE; ++loc){
    SET_BIT(loc, loc);
  }
  for(loc = 0; loc < N_X_SIZE; loc+=2){
    CLEAR_BIT(loc, loc);
  }

  printf_graphics();
  return 0;
}
