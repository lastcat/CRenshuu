#include <gtest/gtest.h>
#include <string.h>
#include <ctype.h>
#include "10.h"

TEST(IS_DEVIDABLE_TEN_test, dividable_case){
  EXPECT_TRUE(IS_DEVIDABLE_TEN(10));
}

TEST(IS_DEVIDABLE_TEN_test, undividable_case){
  EXPECT_FALSE(IS_DEVIDABLE_TEN(49));
}

TEST(swaps_test, case1){
  int a = 2;
  int b = 3;
  swaps(&a,&b);

  EXPECT_EQ(3,a);
  EXPECT_EQ(2,b);

}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
