#include <gtest/gtest.h>
#include "9_3.h"

TEST(count_test, case1){
  int array[] = {1,2,2,4};
  EXPECT_EQ(2, count(2, array, 4));
}

TEST(count_test, case2){
  int array[] = {1};
  EXPECT_EQ(1, count(1, array,1));
}

TEST(count_test, case3){
  int array[] = {1,2,3,4};
  EXPECT_EQ(0, count(5, array,4));
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
