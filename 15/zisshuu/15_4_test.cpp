#include "15_4.h"
#include <gtest/gtest.h>
#include <time.h>

TEST(count_bits_test, case1){
  EXPECT_EQ(2, count_bits('0'));
  EXPECT_EQ(4, count_bits('3'));
}

TEST(count_bits_char_array_test, case1){
  char array[] = {'a','b','c','d','e'};
  EXPECT_EQ(17, count_bits_char_array(array, 5));
}


TEST(speed_test, case1){
  char array[] = {'a','b','c','d','e','b','c','d','e','b','c','d','e','b','c','d','e','b','c','d','e','b','c','d','e'};
  clock_t n_start = clock();
  for(int i = 0; i < 1000000; i++){
    count_bits_char_array(array, 24);
  }
  clock_t n_end = clock();

  clock_t f_start = clock();
  for(int i = 0; i < 1000000; i++){
    fast_count_bits_char_array(array, 24);
  }
  clock_t f_end = clock();

  double time_gap = (n_end - n_start) - (f_end - f_start);
  printf("faster than %f\n", time_gap);
  EXPECT_TRUE(time_gap > 0);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
