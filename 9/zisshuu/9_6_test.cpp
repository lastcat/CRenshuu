#include <gtest/gtest.h>
#include "9_6.h"

TEST(hyphen_to_underscore, case1){
  char str[] = "--------";
  hyphen_to_underscore(str);
  EXPECT_STREQ("________", str);
}


GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
