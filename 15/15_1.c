#include <stdio.h>
#include <string.h>

#define X_SIZE 60
#define Y_SIZE 32

int matrix[X_SIZE][Y_SIZE];

//http://techtipshoge.blogspot.jp/2010/07/memsetmemcpy.html
#define init_matrix() \
  memset(matrix, 1 , sizeof(matrix));

int main(){
  init_matrix();
  for(int i = 0; i < Y_SIZE; i++)
    for(int j = 0; j < X_SIZE; j++)
      printf("%d,",matrix[i][j]);
}
