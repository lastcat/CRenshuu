#include <gtest/gtest.h>
#include "8_7.h"

TEST(normal_case_test, one_digit_case){
  char result[100];
  int array[] = {1};
  normal_case(1, array, result);
  EXPECT_STREQ("one",result);
}

TEST(normal_case_test, two_digit_case1){
  char result[100];
  int array[] = {2,4};
  normal_case(2, array, result);
  EXPECT_STREQ("twenty four",result);
}

TEST(normal_case_test, two_digit_case2){
  char result[100];
  int array[] = {6,0};
  normal_case(2, array, result);
  EXPECT_STREQ("sixty",result);
}

TEST(teen_case_test, case1){
  char result[100];
  teen_case(14, result);
  EXPECT_STREQ("fourteen",result);
}

TEST(convert_int_to_english_test, case1){
  char result[100];
  convert_int_to_english(100, result);
  EXPECT_STREQ("one hundred",result);
}

TEST(convert_int_to_english_test, case2){
  char result[100];
  convert_int_to_english(76, result);
  EXPECT_STREQ("seventy six",result);
}

TEST(convert_int_to_english_test, case3){
  char result[100];
  convert_int_to_english(30, result);
  EXPECT_STREQ("thirty",result);
}

TEST(convert_int_to_english_test, case4){
  char result[100];
  convert_int_to_english(5, result);
  EXPECT_STREQ("five",result);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
