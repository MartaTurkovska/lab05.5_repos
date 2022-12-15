#include <iostream>
#include <cmath>

using namespace std;

double FindNumGP(double b1, double q, int n, int level, int& depth)
{
    if (level > depth)
        depth = level;

    if (n == 1)
        return b1;
    else
        return q * FindNumGP(b1, q, n - 1, level + 1, depth);
}

double FindSumGP(double b1, double q, int n, int level, int& depth)
{
    if (level > depth)
        depth = level;

    if (n == 0)
        return 0;
    if (n == 1)
        return b1;
    int ratio = n - 1;
    return b1 * pow(q, ratio) + FindSumGP(b1, q, ratio, level + 1, depth);
}

int main()
{
    int b1, q, n, depth;
    cout << "b1 = ";    cin >> b1;
    cout << "q = ";    cin >> q;
    cout << "n = ";    cin >> n;

    cout << "bn = " << FindNumGP(b1, q, n, 1, depth) << endl;
    cout << "S = " << FindSumGP(b1, q, n, 1, depth) << endl;
    cout << "depth = " << depth << endl;
    return 0;
}
