#include <iostream>
using namespace std;

int main()
{
    const double feetPerMeter = 0.305;

    double feet;
    cout << "Enter a value for feet: " << endl;
    cin >> feet;

    double meter = feet * feetPerMeter;
    cout << feet << " feet is " << meter << " meters" << endl;

    return 0;
}