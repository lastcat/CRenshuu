#include <gtest/gtest.h>
#include "7_4.h"

TEST(calcTaxTest, inIntCase){
  EXPECT_EQ(calcTax(1000), 1050);
}

TEST(calcTaxTest, inRoundedUpCase){
  EXPECT_EQ(calcTax(155), 163);
}

TEST(calcTaxTest, inRoundedDownCase){
  EXPECT_EQ(calcTax(444), 466);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
