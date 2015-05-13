#include "16_1.h"
#include <gtest/gtest.h>

TEST(nth_digit_test, case1){
  EXPECT_EQ(1, nth_digit(0.012, 1));
}

TEST(nth_digit_test, case2){
  EXPECT_EQ(2, nth_digit(32, 2));
}

TEST(nth_digit_test, case3){
  EXPECT_EQ(3, nth_digit(1232, 3));
}

TEST(nth_digit_test, case4){
  EXPECT_EQ(5, nth_digit(0.452, 2));
}

TEST(sisuu_test, case1){
  EXPECT_EQ(0, sisuu(4.23));
}

TEST(sisuu_test, case2){
  EXPECT_EQ(2, sisuu(129));
}

TEST(sisuu_test, case3){
  EXPECT_EQ(-4, sisuu(0.00047));
}

TEST(read_as_str_test, case1){
  char result[20];
  read_as_str(0.02347, result);
  EXPECT_STREQ("+2.347E-2", result);
}

TEST(read_as_str_test, case2){
  char result[20];
  read_as_str(-24.49, result);
  EXPECT_STREQ("-2.449E+1", result);
}

TEST(write_as_double_test, case1){
  double num = write_as_double("+2.347E-2");
  EXPECT_EQ(0.02347, num);
}

TEST(write_as_double_test, case2){
  double num = write_as_double("-2.449E+1");
  EXPECT_EQ(-24.49, num);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
