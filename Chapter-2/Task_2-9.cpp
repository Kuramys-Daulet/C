#include <iostream>
using namespace std;

int main()
{
    double v0, v1, t;
    cout << "Enter v0, v1, and t: ";
    cin >> v0 >> v1 >> t;

    //Calculation
    double a = (v1 - v0) / t;

    cout << "The average acceleration is " << a;

    return 0;
}