#include "15_5.h"
#include <gtest/gtest.h>
#include <string.h>


TEST(my_memcpy_test, case1){
  int array1[10];
  int array2[] = {1,2,3,4,5};
  my_memcpy(array1, array2, 5);
  EXPECT_EQ(array1[0], 1);
  EXPECT_EQ(array1[1], 2);
  EXPECT_EQ(array1[2], 3);
  EXPECT_EQ(array1[3], 4);
  EXPECT_EQ(array1[4], 5);
}

TEST(fast_my_memcpy_test, case1){
  int array1[10];
  int array2[] = {1,2,3,4,5};
  fast_my_memcpy(array1, array2, 5);
  EXPECT_EQ(array1[0], 1);
  EXPECT_EQ(array1[1], 2);
  EXPECT_EQ(array1[2], 3);
  EXPECT_EQ(array1[3], 4);
  EXPECT_EQ(array1[4], 5);
}

TEST(speed_test, case1){
  int to1[100000];
  int to2[100000];
  int to3[100000];
  int from[100000];

  initialize(from, 100000, 1);

  clock_t n_start = clock();
  my_memcpy(to1, from, 100000);
  clock_t n_end = clock();

  clock_t start = clock();
  memcpy(to2, from, 100000);
  clock_t end = clock();

  clock_t f_start = clock();
  fast_my_memcpy(to2, from, 100000);
  clock_t f_end = clock();

  double default_speed_gap = (n_end - n_start) - (end - start);
  double fastver_speed_gap = (f_end - f_start) - (end - start);
  printf("speed gap between my_memcpy is %f\n", default_speed_gap);
  printf("speed gap between fast ver is %f\n", fastver_speed_gap);
  EXPECT_TRUE(default_speed_gap - fastver_speed_gap > 0);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
