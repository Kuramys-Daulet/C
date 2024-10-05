#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  cout << setw(14) << "Number" << setw(14) << "Exponent" << endl;
  cout << "--------------------------------" << endl;

  for (int num = 0; num <= 10; num++)
  {
    cout << setw(14) << num << setw(14) << exp(num * 1.0) << endl;
  }

  return 0;
}
