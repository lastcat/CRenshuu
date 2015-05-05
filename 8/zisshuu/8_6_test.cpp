#include <gtest/gtest.h>
#include "8_6.h"
#include <stdio.h>
#include <string.h>
//for DEBUG
/*
void print_array(int array[], int size){
  printf("contents of array is: {");
  int i;
  printf("%d", array[0]);
  for(i = 1; i < size; i++){
    printf(", %d", array[i]);
  }
  printf("}\n");
}
*/

//convert_to_ward test
TEST(convert_to_word_test, case1){
  EXPECT_STREQ("three", convert_to_word(3));
}

TEST(convert_to_word_test, case2){
  EXPECT_STREQ("seven", convert_to_word(7));
}

TEST(convert_to_word_test, not_number_case){
  EXPECT_STREQ("invalid number", convert_to_word(12));
}

//convert_to_string_test
TEST(convert_to_string_test, one_digit_case){
  int array[] = {1};
  char result[30];
  convert_to_string(array, 1, result);
  EXPECT_STREQ("one", result);
}

TEST(convert_to_string_test, many_digit_case){
  int array[] = {1, 2, 3};
  char result[30];
  convert_to_string(array, 3, result);
  EXPECT_STREQ("one two three", result);
}

//digit_number_test
TEST(digit_number_test, one_digit_case){
  EXPECT_EQ(1, digit_number(6));
}

TEST(digit_number_test, three_digit_case){
  EXPECT_EQ(3, digit_number(666));
}

//number_of_digit_order_test
TEST(number_of_digit_order_test, second_digit){
  EXPECT_EQ(2, number_of_digit_order(123, 2));
}

TEST(number_of_digit_order_test, fifth_digit){
  EXPECT_EQ(5, number_of_digit_order(56728,5));
}

//split_to_int_array_test
TEST(split_to_int_array_test, case1){
  int result[1];
  int expected[] = {1};
  split_to_int_array(1, result);
  EXPECT_EQ(memcmp(expected, result, sizeof(int) * 1), 0);
}

TEST(split_to_int_array_test, case2){
  int result[4];
  int expected[] = {1,5,4,9};
  split_to_int_array(1549, result);
  EXPECT_EQ(memcmp(expected, result, sizeof(int) * 4), 0);
}

//int_array_to_char_array_test
TEST(int_array_to_char_array_test, normal_case){
  int int_array[] = {1,2,3,4,5,6,6,7,8};
  char char_array[9];
  char expected[] = {'1','2','3','4','5','6','6','7','8'};
  int_array_to_char_array(int_array, char_array, 9);
  EXPECT_EQ(memcmp(expected, char_array, sizeof(char) * 9), 0);
}

//convert_int_to_text_test
TEST(covert_int_to_text_test, case1){
  int num = 1;
  char result[100];
  convert_int_to_text(num, result);
  EXPECT_STREQ("one", result);
}

TEST(covert_int_to_text_test, case2){
  int num = 123;
  char result[100];
  convert_int_to_text(num, result);
  EXPECT_STREQ("one two three", result);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
