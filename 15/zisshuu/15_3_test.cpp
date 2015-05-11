#include "15_3.h"
#include <gtest/gtest.h>
#include <time.h>


TEST(sum_of_array_test, case1){
  int array[] = {1,2,3,4,5,6,7,8,9,10};
  int sum = sum_of_array(array, 10);
  EXPECT_EQ(55, sum);
}

TEST(fast_sum_of_array_test, case1){
  int array[] = {1,2,3,4,5,6,7,8,9,10};
  int sum = fast_sum_of_array(array, 10);
  EXPECT_EQ(55, sum);
}

TEST(speed_test, case1){
  int array[] = {1,2,3,4,5,6,7,8,9,10};
  clock_t n_start = clock();
  for(int i = 0; i < 100000; i++)
    sum_of_array(array, 10);
  clock_t n_end = clock();

  clock_t f_start = clock();
  for(int i = 0; i < 100000; i++)
    fast_sum_of_array(array, 10);
  clock_t f_end = clock();

  //printf("normal time%lu\n", (n_end - n_start));
  //printf("fast time%lu\n", (f_end - f_start));

  EXPECT_TRUE(((n_end - n_start) - (f_end - f_start)) > 0.0);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
