#include "13_1.h"
#include <gtest/gtest.h>


TEST(initialize_array_test, case1){
  int array[] = {1,2,4,5,6};
  initialize_array(array, 5);

  EXPECT_EQ(0, array[0]);
  EXPECT_EQ(0, array[2]);
  EXPECT_EQ(0, array[4]);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
