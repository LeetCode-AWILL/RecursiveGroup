#include "gtest/gtest.h"
#include"../Recursive/include/Tribonacii.h"

using namespace LeetCode::Recursive;

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}

TEST(TribonaciiCase, TribonaciiWork)
{
    Tribonacii tribonacii;
    EXPECT_EQ(1, 1);
    EXPECT_EQ(0, tribonacii.Func0(0));
    EXPECT_EQ(1, tribonacii.Func0(1));
    EXPECT_EQ(1, tribonacii.Func0(2));
    //
    EXPECT_EQ(0, tribonacii.Func1(0));
    EXPECT_EQ(1, tribonacii.Func1(1));
    EXPECT_EQ(1, tribonacii.Func1(2));
    //
    EXPECT_EQ(0, tribonacii.Func1(0));
    EXPECT_EQ(1, tribonacii.Func1(1));
    EXPECT_EQ(1, tribonacii.Func1(2));
    //
    for (int i = 0; i < 20; i += 1)
    {
        EXPECT_EQ(tribonacii.Func0(i), tribonacii.Func1(i));
        EXPECT_EQ(tribonacii.Func1(i), tribonacii.Func2(i));
    }
    EXPECT_TRUE(true);
}