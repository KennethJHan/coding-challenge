#include "p_31612.cpp"
#include <gtest/gtest.h>

TEST(test_31612, test_1) {
    std::string s = "jjooii";
    EXPECT_EQ(10, count_stroke(s));
}

TEST(test_31612, test_2) {
    std::string s = "i";
    EXPECT_EQ(2, count_stroke(s));
}

TEST(test_31612, test_3) {
    std::string s = "joiojiioijoio";
    EXPECT_EQ(21, count_stroke(s));
}

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}