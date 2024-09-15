
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const double PI = 3.14159;

    //Entering Data
    double radius, length;
    cout << "Enter the radius and length of a cylinder:" << endl;
    cin >> radius >> length;

    //Calculation
    double area = radius * radius * PI;
    double volume = area * length;

    //Output calculation
    cout << "The area is " << area << endl;
    cout << "The volume is " << volume << endl;

    return 0;

}