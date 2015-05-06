#include <gtest/gtest.h>
#include "9_5.h"

TEST(max_of_array, case1){
  int array[] = {1,7,4,2,6};
  EXPECT_EQ(7, max_of_array(array,5));
}

TEST(max_of_array, case2){
  int array[] = {4};
  EXPECT_EQ(4, max_of_array(array,1));
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
