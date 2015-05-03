#include <gtest/gtest.h>
#include "7_5.h"

TEST(isPrimeTest, isPrimeCase){
  EXPECT_TRUE(isPrime(7));
}

TEST(judgePrimeOrNotTest, isNotPrimeCase){
  EXPECT_FALSE(isPrime(54));
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
