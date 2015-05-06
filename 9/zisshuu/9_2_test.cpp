#include <gtest/gtest.h>
#include "9_2.h"

TEST(begings_test, match_case){
  EXPECT_TRUE(begins("hogefuga", "hoge"));
}

TEST(begings_test, unmatch_case){
  EXPECT_TRUE(begins("hogefuga", "hoga"));
}

TEST(begings_test, same_case){
  EXPECT_TRUE(begins("hoge", "hoge"));
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
