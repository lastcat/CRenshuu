#include "graph.h"
#include <stdio.h>

#define CLEAR_BIT(x,y) (graphics[(x)/8][y] &= ~(0x80 >> ((x)%8)))
#define TEST_BIT(x,y) (graphics[(x)/8][y] & (0x80 >> ((x)%8)))


int main(){
  int loc;

  for(loc = 0; loc < X_SIZE; ++loc){
    SET_BIT(loc, loc);
  }
  for(loc = 0; loc < X_SIZE; loc+=2){
    CLEAR_BIT(loc, loc);
  }

  printf_graphics();
  for(loc = 0; loc < X_SIZE; ++loc){
    if(TEST_BIT(loc, loc) != 0)
      printf("%d, %d is 1\n", loc, loc);
    else
      printf("%d, %d is 0\n", loc, loc);
  }
  return 0;
}
