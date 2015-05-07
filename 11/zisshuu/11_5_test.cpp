#include <gtest/gtest.h>
#include "11_5.h"

TEST(cast_bits_to_int, case1){
  int array[] = {1,1,0,1};
  EXPECT_EQ(11,cast_bits_to_int(array));
}

TEST(cast_bits_to_int, case2){
  int array[] = {0,1,0,0};
  EXPECT_EQ(2,cast_bits_to_int(array));
}

//テストがちょっとわかりにくいから改良したほうがいいかも
TEST(devide_eight_four_bit_test, case1){
  int array[8] = {};
  //1431655576 = 最終bit以外の4の倍数bitのみを1にした数
  devide_eight_four_bit(143165576, array);

  EXPECT_EQ(8,array[0]);
  EXPECT_EQ(8,array[1]);
  EXPECT_EQ(8,array[2]);
  EXPECT_EQ(8,array[3]);
  EXPECT_EQ(8,array[4]);
  EXPECT_EQ(8,array[5]);
  EXPECT_EQ(8,array[6]);
  EXPECT_EQ(0,array[7]);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
