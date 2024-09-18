#include <iostream>
using namespace std;

int main()
{
    int years; 
    cout << "Enter the number of years: ";
    cin >> years;
    int s = 60 * 60 * 24 * 365 * years;
    cout << "population = " << 312032486 +  s / 7 - s / 13 + s / 45 << endl;
    return 0;
}