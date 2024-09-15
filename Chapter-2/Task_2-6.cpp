#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number between 0 and 1000:" << endl;
    cin >> number;

    //Calculation
    int num_1 = number % 10;
    int num_2 = number / 10 % 10;
    int num_3 = number / 100 % 10;
    int num_4 = number / 1000 % 10;

    int sum = num_1 + num_2 + num_3 + num_4;
    cout << "The sum of the digits is " << sum << endl;

    return 0;
}