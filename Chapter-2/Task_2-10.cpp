#include <iostream>
using namespace std;

int main()
{
    double waterKilograms, initialTemperature, finalTemperature;
    cout << "Enter the amount of water in kilograms: ";
    cin >> waterKilograms;

    cout << "Enter the initial temperature: ";
    cin >> initialTemperature;

    cout << "Enter the final temperature: ";
    cin >> finalTemperature;

    //Calculation
    int q = waterKilograms * (finalTemperature - initialTemperature) * 4184;

    cout << "The energy needed is " << q;

    return 0;
}