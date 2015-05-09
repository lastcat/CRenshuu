#include "14_2.h"
#include <gtest/gtest.h>


TEST(shift_string_test, case1){
  char str[100] = "hogehoge";
  shift_string(str, 3, 4);

  EXPECT_STREQ("hoge    hoge", str);
}

TEST(tab_to_space_test, case2){
  char str[100] = "ho\tgeho\tge";
  tab_to_space(str);

  EXPECT_STREQ("ho    geho    ge", str);
}

GTEST_API_ int main(int argc, char **argv){
  //tab_to_space_copy(argv[1], argv[2]);

  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
