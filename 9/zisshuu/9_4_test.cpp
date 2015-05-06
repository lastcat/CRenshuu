#include <gtest/gtest.h>
#include "9_4.h"

TEST(hash_of_string_test, case1){
  char str[] = "abc";
  EXPECT_EQ('a'+'b'+'c', hash_of_string(str));
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
