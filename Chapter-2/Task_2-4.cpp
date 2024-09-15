#include <iostream>
using namespace std;

int main()
{
    const double poundPerKilogram = 0.454;

    double pound;
    cout << "Enter a number in pounds: " << endl;
    cin >> pound;

    double kilogramms = pound * poundPerKilogram;
    cout << pound << " pounds is " << kilogramms << " kilograms" << endl;

    return 0;
}