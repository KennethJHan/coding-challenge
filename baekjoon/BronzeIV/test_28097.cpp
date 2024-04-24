#include "p_28097.cpp"
#include <gtest/gtest.h>
#include <iostream>

TEST(Test_P28097, Subtest_1) {
    std::vector<int> v = {12, 12};
    std::pair<int, int> p = get_res(v);
    ASSERT_TRUE(p.first == 1);
    ASSERT_TRUE(p.second == 8);
}

TEST(Test_P28097, Subtest_2) {
    std::vector<int> v = {10};
    std::pair<int, int> p = get_res(v);
    ASSERT_TRUE(p.first == 0);
    ASSERT_TRUE(p.second == 10);
}

TEST(Test_P28097, Subtest_3) {
    std::vector<int> v = {10, 11, 11};
    std::pair<int, int> p = get_res(v);
    ASSERT_TRUE(p.first == 2);
    ASSERT_TRUE(p.second == 0);
}

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// g++ -o test_28097 test_28097.cpp -lgtest -std=c++14