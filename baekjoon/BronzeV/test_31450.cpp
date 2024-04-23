#include "p_31450.cpp"
#include <gtest/gtest.h>
#include <iostream>

TEST(Test_P31450, Subtest_1) { ASSERT_TRUE(p_31450(6, 3) == 1); }

TEST(Test_P31450, Subtest_2) { ASSERT_TRUE(p_31450(5, 3) == 0); }

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}