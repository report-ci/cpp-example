#include "CppUTest/TestHarness.h"

TEST_GROUP(ClassName)
{
        void setup()
        {
        }
        void teardown()
        {
        }
};

TEST(ClassName, Create)
{
    CHECK(false);
    CHECK_EQUAL(1,1);
    LONGS_EQUAL(2,1);
    DOUBLES_EQUAL(1.000, 1.001, .01);
    STRCMP_EQUAL("hello", "hello");
    FAIL("The prior tests pass, but this one doesn't");
}

#include "CppUTest/CommandLineTestRunner.h"

int main(int ac, char** av)
{
    return RUN_ALL_TESTS(ac, av);
}