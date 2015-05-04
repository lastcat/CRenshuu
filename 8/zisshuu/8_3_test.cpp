#include <gtest/gtest.h>
#include "8_3.h"

TEST(averageTEST, result_int_case){
  int array[] = {3,4,5};
  EXPECT_EQ(4,average(array, 3));
}

TEST(averageTEST, result_double_case){
  int array[] = {1,2,3,4};
  EXPECT_EQ( 10.0/4 ,average(array, 4));
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
