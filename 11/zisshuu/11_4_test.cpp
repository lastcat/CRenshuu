#include <gtest/gtest.h>
#include "11_4.h"

TEST(count_set_bit_test, case1){
  EXPECT_EQ(2,count_set_bit(5));
}

TEST(count_set_bit_test, case2){
  EXPECT_EQ(0,count_set_bit(0));
}

TEST(count_set_bit_test, minor_case){
  EXPECT_EQ(31,count_set_bit(-5));
}


GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
