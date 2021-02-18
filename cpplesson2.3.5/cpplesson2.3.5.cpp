#include <iostream>
using namespace std;
int main()
{
    int m, n, am, bm, cm, an, bn, cn;
    cin >> m >> n;
    am = m / 100 % 10;
    an = n / 100 % 10;
    bm = m / 10 % 10;
    bn = n / 10 % 10;
    cm = m  % 10;
    cn = n  % 10;
    cout << am + an << " " << bm + bn << " " << cm + cn;
    return 0;
}