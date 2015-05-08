#include <gtest/gtest.h>
#include "7_3.h"

TEST (calcDaysTest, overADay){
	EXPECT_EQ(calcDays(960 * 60 * 60 * 24 * 5 - 100), 4);
}

TEST (calcDaysTest, zeroDays){
	EXPECT_EQ(calcDays(960 * 60 * 60 * 12 ), 0);
}

TEST (calcHoursTest, overAHour){
	EXPECT_EQ(calcHours(960 * 60 * 60 * 10 - 100), 9);
}

TEST (calcHoursTest, zeroHours){
	EXPECT_EQ(calcHours(960 * 60 * 55), 0);
}

TEST (calcMinutesTest, overAMinute){
	EXPECT_EQ(calcMinutes(960 * 60 * 10 - 100), 9);
}

TEST (calcMinutesTest, zeroMinutes){
	EXPECT_EQ(calcMinutes(960 * 55 ), 0);
}

TEST (calcSecondsTest, overASecond){
	EXPECT_EQ(calcSeconds(960 * 20 - 100), 19);
}

TEST (calcSecondsTest, zeroSeconds){
	EXPECT_EQ(calcSeconds(960 - 100 ), 0);
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
