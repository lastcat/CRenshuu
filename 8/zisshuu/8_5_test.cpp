#include <gtest/gtest.h>
#include "8_5.h"

TEST(is_bowel_TEST, vowel_case){
  EXPECT_TRUE(is_vowel('a'));
}

TEST(is_bowel_TEST, not_vowel_case){
  EXPECT_FALSE(is_vowel('s'));
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
