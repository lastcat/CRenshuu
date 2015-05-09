#include "13_2.h"
#include <gtest/gtest.h>


TEST(find_not_space_chara_test, case1){
  char str[] = "         ue";
  char result = *(find_not_space_chara(str,12));

  EXPECT_EQ('u', result);
}

TEST(find_not_space_chara_test, case2){
  char str[] = "aiueo";
  char result = *(find_not_space_chara(str,6));

  EXPECT_EQ('a', result);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
