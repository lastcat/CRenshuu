#include "14_1.h"
#include <gtest/gtest.h>


TEST(count_line_test, case1){
  FILE *file;
  file = fopen("14/zisshuu/14_1_test.cpp", "r");
  int count = count_line(file);
  EXPECT_EQ(15, count);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
