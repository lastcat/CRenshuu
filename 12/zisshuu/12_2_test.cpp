#include "12_2.h"
#include <gtest/gtest.h>


TEST(between_time_in_minutes_test, case1){
  mytime time1 = {
    23,15, 40
  };
  mytime time2 = {
    4, 12, 25
  };
  EXPECT_EQ(195, between_time_in_minutes(time1, time2));
}

TEST(between_time_in_minutes_test, case2){
  mytime time1 = {
    23,15, 40
  };
  mytime time2 = {
    4, 14, 50
  };
  EXPECT_EQ(50, between_time_in_minutes(time1, time2));
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
