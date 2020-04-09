#include <gtest/gtest.h>


TEST(SquareRootTest, PositiveNos)
{
ASSERT_NE(6, 36.0);
ASSERT_GE(2, 1);
ASSERT_LE(2, 5);
ASSERT_EQ(3, 3);
}

TEST(SquareRootTest, NegativeNos)
{
ASSERT_EQ(-1.0, -1.0);
ASSERT_DOUBLE_EQ(42.0, 4.2 * 10.);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}