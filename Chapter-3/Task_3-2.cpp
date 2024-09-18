#include <iostream>
using namespace std;

int main(){
    int number_1, number_2;
    cout << "Enter two integers: ";
    cin >> number_1 >> number_2;
    if(number_1%number_2 == 0) {
        cout << number_1 << " is divisible by " << number_2;

    }
    if(number_1%number_2 != 0) {
       cout << number_1 << " is not divisible by " << number_2; 
    }

    return 0;
}
