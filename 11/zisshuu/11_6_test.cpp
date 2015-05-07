#include <gtest/gtest.h>
#include "11_6.h"

TEST(count_bits_test, case1){
  EXPECT_EQ(4,count_bits(1155));
}

TEST(count_bits_test, case2){
  EXPECT_EQ(7,count_bits(143165576));
}

TEST(set_bits_left, case1){
  EXPECT_EQ(-268435456,set_bits_left(4));
}

TEST(set_bits_left, case2){
  EXPECT_EQ(-1,set_bits_left(32));
}

TEST(shift_all_bit_to_left, case1){
  int num  = (1 << 4) | (1 << 9) | (1 << 20);
  EXPECT_EQ(-536870912,shift_all_bit_to_left(num));
}

TEST(shift_all_bit_to_left, case2){
  int num = 0;
  EXPECT_EQ(0,shift_all_bit_to_left(num));
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
