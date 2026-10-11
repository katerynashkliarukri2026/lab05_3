
#include <iostream>
#include <iomanip>
#include "functions.h"

using namespace std;

int main()
{
    double kp, kk, dk, k, z;
    int n;

    cout << "kp = ";
    cin >> kp;

    cout << "kk = ";
    cin >> kk;

    cout << "n = ";
    cin >> n;

    if (n <= 0 || kk < kp)
    {
        cout << "Incorrect input!" << endl;
        return 1;
    }

    dk = (kk - kp) / n;

    cout << "\n========================================\n";
    cout << "       Tabulation of the function\n";
    cout << "========================================\n";
    cout << setw(12) << "k"
        << setw(20) << "z" << endl;
    cout << "----------------------------------------\n";

    for (int i = 0; i <= n; i++)
    {
        k = kp + i * dk;
        z = calculateZ(k);

        cout << setw(12) << fixed << setprecision(4) << k
            << setw(20) << setprecision(6) << z << endl;
    }

    cout << "========================================\n";

    return 0;
}