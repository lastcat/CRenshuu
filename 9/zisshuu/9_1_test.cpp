#include <gtest/gtest.h>
#include "9_1.h"

TEST(count_word_test, one_word_case){
  char str[] = "hoge";
  EXPECT_EQ(1, count_word(str));
}

TEST(count_word_test, three_word_case){
  char str[] = "three word case";
  EXPECT_EQ(3, count_word(str));
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
