#include <iostream>
using namespace std;

int main()
{
    double celsius;
    cout << "Enter a degree in Celsius:" << endl;
    cin >> celsius;
    double fahrenheit = (9.0 / 5) * celsius + 32;
    cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit" << endl;

    return 0;
}