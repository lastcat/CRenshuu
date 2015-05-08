#include <gtest/gtest.h>
#include <stdio.h>
#include "7_2.h"

TEST(betweenDayTest, whenOverAYear)
{
  EXPECT_EQ(betweenDay(2,14,6,12), 247);
}

TEST(betweenDayTest, whenInASameYear)
{
  EXPECT_EQ(betweenDay(11,30,6,12), 171);
}

TEST(calcBetweenYearTest, whenOverSomeYears)
{
  EXPECT_EQ(calcBetweenYear(2015,3,1, 2012,4,20), 2);
}

TEST(calcBetweenYearTest, whenInSameYears)
{
  EXPECT_EQ(calcBetweenYear(2013,1,20, 2012,4,20), 0);
}

GTEST_API_ int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}