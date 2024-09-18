#include <iostream>
using namespace std;

int main()
{
    double subtotal, gratuity;
    cout << "Enter the subtotal and a gratuity rate: ";
    cin >> subtotal >> gratuity;
    double tips = subtotal / 100 * gratuity;
    double total = subtotal + tips;
    cout << "The gratuity is $" << tips << " and total is $" << total << endl;
    
    return 0;
}