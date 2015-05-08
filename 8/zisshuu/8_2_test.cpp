#include <gtest/gtest.h>
#include "8_2.h"

TEST(gcdTest, in_each_other_prime_case){
  EXPECT_EQ(1, gcd(3,4));
}

TEST(gcdTEST, in_orher_is_devided_by_another_case ){
  EXPECT_EQ(3, gcd(3,21));
}

TEST(gcdTEST, devided_same_case){
  EXPECT_EQ(3, gcd(12,21));
}

TEST(lmcTEST, in_each_other_prime_case){
  EXPECT_EQ(12, lcm(3,4));
}

TEST(lmcTEST, in_other_is_devided_by_another_case){
  EXPECT_EQ(21, lcm(3,21));
}

TEST(lmcTEST, devided_same_case){
  EXPECT_EQ(84, lcm(12,21));
}

TEST(lmcTEST, same_number_case){
  EXPECT_EQ(3, lcm(3,3));
}

TEST(add_fraction_TEST, not_needed_fit_denomitors_case_n){
  int array[2];
  EXPECT_EQ( 2, add_fraction(1,3,1,3,array)[0]);
}

TEST(add_fraction_TEST, not_needed_fit_denomitors_case_d){
  int array[2];
  EXPECT_EQ( 3, add_fraction(1,3,1,3, array)[1]);
}

TEST(add_fraction_TEST, normal_case_n){
  int array[2];
  EXPECT_EQ( 11, add_fraction(3,2,1,3, array)[0]);
}

TEST(add_fraction_TEST, normal_case_d){
  int array[2];
  EXPECT_EQ( 6, add_fraction(3,2,1,3, array)[1]);
}

TEST(calculate_resistance_TEST, normal_case){
  int numerators[5] = {1,1,1,1,1};
  int denomitors[5] = {1,2,3,4,5};
  EXPECT_EQ( 60/(60.0+30+20+15+12), calculate_resistance(numerators, denomitors, 5));
}

GTEST_API_ int main(int argc, char **argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
