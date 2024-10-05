#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  cout << left;
  cout << setw(12) << "Meters" << setw(15) << "Feet" << endl;
  cout << "---------------------------------" << endl;

  // Use while loop
  int meters = 1;
  while (meters <= 15)
  {
    cout << fixed << setprecision(3);
    cout << setw(12) << meters << setw(15) << meters * 3.280 << endl;
    meters++;
  }

  return 0;
}
