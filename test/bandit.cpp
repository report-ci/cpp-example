#include <bandit/bandit.h>

using namespace snowhouse;
using namespace bandit;

go_bandit([]() {
    describe("our first test", []() {
        it("might fail", [&]() {
            AssertThat(5, Equals(5));
        });
    });
});


go_bandit([]()
{
    describe("a calculator", []()
    {

        const auto add = [](int i, int j) { return i + j; };
        const auto subtract = [](int i, int j) { return i - j; };


        it("can add", [&]()
        {
            AssertThat(add(2, 3), Equals(5));
        });

        it("can subtract", [&]()
        {
            AssertThat(subtract(2, 3), Equals(-1));
        });
    });
});

int main(int argc, char* argv[]) {
    // Run the tests.
    return bandit::run(argc, argv);
}
