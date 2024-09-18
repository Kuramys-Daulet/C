#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    double d = pow(b, 2) - 4 * a * c;
    if (d>0) {
        double root_1 = (-b + pow(d, 0.5)) / (2 * a);
        double root_2 = (-b - pow(d, 0.5)) / (2 * a);
        cout << "The roots are " << root_1 << " and " << root_2;

    }
    if(d==0){
        double root = (-b + pow(d, 0.5)) / (2 * a);
        cout << "The root is " << root;

    }
    if(d<0){
        cout << "The equation has no real roots.";
    }

    return 0;
}