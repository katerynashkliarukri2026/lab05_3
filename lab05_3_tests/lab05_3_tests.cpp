
#include "pch.h"
#include "CppUnitTest.h"
#include "../functions.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab053tests
{
    TEST_CLASS(Lab053Tests)
    {
    public:
        TEST_METHOD(TestJZero)
        {
            Assert::AreEqual(1.0, j(0.0), 0.000001);
        }

        TEST_METHOD(TestJForArgumentGreaterThanOne)
        {
            double x = 1.5;
            double expected = (sin(x) + 1) /
                (cos(x) * cos(x) + exp(x));

            Assert::AreEqual(expected, j(x), 0.000001);
        }

        TEST_METHOD(TestCalculateZ)
        {
            double k = 2.0;
            double expected = j(k) +
                pow(j(k - 1), 2) + 2 * j(1);

            Assert::AreEqual(expected, calculateZ(k), 0.000001);
        }
    };
}
