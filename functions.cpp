
#include <cmath>
#include "functions.h"

double j(const double x)
{
    if (fabs(x) >= 1)
    {
        return (sin(x) + 1) /
            (cos(x) * cos(x) + exp(x));
    }
    else
    {
        double S = 1.0;
        double a = 1.0;

        for (int m = 1; m <= 7; m++)
        {
            a *= (4.0 * x * x) /
                ((2 * m - 1) * (2 * m));
            S += a;
        }

        return S / cos(2 * x);
    }
}

double calculateZ(const double k)
{
    return j(k) + pow(j(k - 1), 2) + 2 * j(1);
}