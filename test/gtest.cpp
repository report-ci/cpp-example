#include <gtest/gtest.h>


TEST(SquareRootTest, PositiveNos)
{
    ASSERT_NE(6, 35.0);
    ASSERT_GE(2, 3);
    ASSERT_LE(2, 1);
    ASSERT_EQ(4, 3);
}

TEST(SquareRootTest, NegativeNos)
{
    ASSERT_EQ(-1.3, -1.0);
    ASSERT_EQ(42, 4.2 * 10.);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}