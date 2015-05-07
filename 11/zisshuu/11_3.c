#include "graph.h"

#define CLEAR_BIT(x,y) (graphics[(x)/8][y] &= ~(0x80 >> ((x)%8)))

int main(){
  int loc;
  int x,y;

  for(y = 0; y < Y_SIZE; ++y)
    for(x = 0; x < X_SIZE; ++x)
      SET_BIT(x,y);

  for(loc = 0; loc < X_SIZE; ++loc)
    CLEAR_BIT(loc, loc);

  printf_graphics();
  return 0;
}
