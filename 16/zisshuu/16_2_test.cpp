#include "16_2.h"
#include <gtest/gtest.h>

TEST(nth_bit_test, case1){
  int num = (1 << 4);
  num += (1 << 6);
  EXPECT_EQ(1, nth_bit(num,4));
  EXPECT_EQ(0, nth_bit(num,5));
  EXPECT_EQ(1, nth_bit(num,6));
}

TEST(to_double_test, case1){
  unsigned int num = 0;
  show_bits(num);
  num += (1 << 31);
  show_bits(num);
  num += (1 << 18);
  show_bits(num);
  num += (1 << 17);
  show_bits(num);
  num += (1 << 14);
  show_bits(num);
  num += (1 << 13);
  show_bits(num);
  EXPECT_EQ(-12.75, to_double(num));
}

TEST(to_double_test, case2){
  EXPECT_EQ(1.0, to_double(32768));
}


GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
