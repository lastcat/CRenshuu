#include "15_2.h"
#include <gtest/gtest.h>
#include <time.h>


TEST(initialize_matrix_test, case1){
  int matrix[X_SIZE][Y_SIZE];
  initialize_matrix(5, matrix);
  EXPECT_EQ(5, matrix[3][3]);
}

TEST(calc_element_matrix_test, case1){
  int matrix1[X_SIZE][Y_SIZE];
  initialize_matrix(2, matrix1);

  int matrix2[X_SIZE][Y_SIZE];
  initialize_matrix(2, matrix2);

  int result = calc_element(3, 2, matrix1, matrix2);
  EXPECT_EQ(120, result);
}

TEST(multiple_matrix_test, case1){

  int matrix1[X_SIZE][Y_SIZE];
  initialize_matrix(2, matrix1);

  int matrix2[X_SIZE][Y_SIZE];
  initialize_matrix(5, matrix2);

  int result_matrix[X_SIZE][Y_SIZE];
  multiple_matrix(matrix1, matrix2, result_matrix);

  for(int i = 0; i < X_SIZE; i++){
    for(int j = 0; j < Y_SIZE; j++){
      EXPECT_EQ(300, result_matrix[i][j]);
    }
  }
}

TEST(fast_initialize_matrix_test, case1){
  int matrix[X_SIZE][Y_SIZE];
  fast_initialize_matrix(5, matrix);
  EXPECT_EQ(5, matrix[3][3]);
}

TEST(fast_multiple_matrix_test, case1){

  int matrix1[X_SIZE][Y_SIZE];
  fast_initialize_matrix(2, matrix1);

  int matrix2[X_SIZE][Y_SIZE];
  fast_initialize_matrix(5, matrix2);

  int result_matrix[X_SIZE][Y_SIZE];
  fast_multiple_matrix(matrix1, matrix2, result_matrix);

  for(int i = 0; i < X_SIZE; i++){
    for(int j = 0; j < Y_SIZE; j++){
      EXPECT_EQ(300, result_matrix[i][j]);
    }
  }
}

TEST(speed_test, case1){
  clock_t n_start = clock();
  int matrix1[X_SIZE][Y_SIZE];
  initialize_matrix(2, matrix1);

  int matrix2[X_SIZE][Y_SIZE];
  initialize_matrix(5, matrix2);

  int result_matrix1[X_SIZE][Y_SIZE];
  multiple_matrix(matrix1, matrix2, result_matrix1);
  clock_t n_end = clock();

  clock_t f_start = clock();
  int matrix11[X_SIZE][Y_SIZE];
  fast_initialize_matrix(2, matrix1);

  int matrix12[X_SIZE][Y_SIZE];
  fast_initialize_matrix(5, matrix2);

  int result_matrix2[X_SIZE][Y_SIZE];
  fast_multiple_matrix(matrix11, matrix12, result_matrix2);
  clock_t f_end = clock();

  EXPECT_TRUE(((n_end - n_start) - (f_end - f_start)) > 0);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
