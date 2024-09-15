#include <iostream>
using namespace std;

int main()
{
    
    const int minutesPerYear = 60 * 24 * 365;
    const int minutesPerDay = 60 * 24;

    int minutes;
    cout << "Enter the number of minutes: ";
    cin >> minutes;

    //Calculation
    int years = minutes / minutesPerYear;
    int days = minutes % minutesPerYear / minutesPerDay;

    //Output
    cout << minutes << "minutes is approximately " << years << " years and " << days << " days"; 

    return 0;
}