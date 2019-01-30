#include <cxxtest/TestSuite.h>

class MyTestSuite1 : public CxxTest::TestSuite
{
public:
    void testAddition(void)
    {
        TS_ASSERT(1 + 1 > 1);
        TS_ASSERT_EQUALS(2 + 1, 2);
    }

    void testXYZ()
    {
        TS_ASSERT(false);
    }

    void testBar()
    {
        throw std::runtime_error("Some exception");
    }
};