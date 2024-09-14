#include <iostream>
using namespace std;

int main()
{
    int s = 60 * 60 * 24 * 365;
    cout << "population = " << 312032486 +  s / 7 - s / 13 + s / 45 << endl;
    return 0;
}