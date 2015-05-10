#include <stdio.h>

#define X_SIZE 30
#define Y_SIZE 30

int initialize_matrix(int num, int matrix[X_SIZE][Y_SIZE]){
  for(int i = 0; i < X_SIZE; i++){
    for(int j = 0; j < Y_SIZE; j++){
      matrix[i][j] = num;
    }
  }
}

int fast_initialize_matrix(int num, int matrix[X_SIZE][Y_SIZE]){
  register int *matrix_ptr;
  for(matrix_ptr = &matrix[0][0]; matrix_ptr <= &matrix[X_SIZE-1][Y_SIZE-1]; matrix_ptr++){
    *matrix_ptr = num;
  }
}

int calc_element(int line, int row, int matrix1[X_SIZE][Y_SIZE], int matrix2[X_SIZE][Y_SIZE]){
    int sum = 0;
    for(int i = 0; i < X_SIZE; i++){
      //とりあえず共に正方行列とする
      sum += matrix1[i][line] * matrix2[row][i];
    }
    return sum;
}

/*保留
int fast_calc_element(int line, int row, int matrix1[X_SIZE][Y_SIZE], int matrix2[X_SIZE][Y_SIZE]){
    register int sum = 0;
    register int *matrix1_ptr;
    register int *(matrix2_ptr[X_SIZE]);

    matrix1_ptr = &matrix1[0][line];
    matrix2_ptr = &matrix2[row];
    return sum;
}
*/

int multiple_matrix(int matrix1[X_SIZE][Y_SIZE], int matrix2[X_SIZE][Y_SIZE], int result[X_SIZE][Y_SIZE]){
  for(int i = 0; i < X_SIZE; i++){
    for(int j = 0; j < Y_SIZE; j++){
      result[i][j] = calc_element(j,i,matrix1, matrix2);
    }
  }
}

int fast_multiple_matrix(int matrix1[X_SIZE][Y_SIZE], int matrix2[X_SIZE][Y_SIZE], int result[X_SIZE][Y_SIZE]){
  register int *matrix_ptr;
  int ptr_size = sizeof(int);
  int *start_address = &result[0][0];
  for(matrix_ptr = &result[0][0]; matrix_ptr <= &result[X_SIZE-1][Y_SIZE-1]; matrix_ptr++){
    *matrix_ptr = calc_element((matrix_ptr -  start_address)/X_SIZE, (matrix_ptr -  start_address)%Y_SIZE, matrix1, matrix2);
  }
}
