#include <iostream>
using namespace std;

int main()
{
    cout << "p1 = " << 6 * (1.0 + (1.0 / 4) + (1.0 / 9) + (1.0 / 16) + (1.0 / 25)) << endl;
    cout << "p2 = " << 6 * (1.0 + (1.0 / 4) + (1.0 / 9) + (1.0 / 16) + (1.0 / 25) + (1.0 / 36)) << endl;
    return 0;
}