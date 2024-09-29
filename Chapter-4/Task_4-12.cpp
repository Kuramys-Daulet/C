#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter a letter grade: ";
    cin >> grade;

    // Convert the letter to uppercase
    grade = toupper(grade);

    int numericValue;

    switch(grade) {
        case 'A':
            numericValue = 4;
            break;
        case 'B':
            numericValue = 3;
            break;
        case 'C':
            numericValue = 2;
            break;
        case 'D':
            numericValue = 1;
            break;
        case 'F':
            numericValue = 0;
            break;
        default:
            cout << grade << " is an invalid grade" << endl;
            return 0;
    }

    cout << "The numeric value for grade " << grade << " is " << numericValue << endl;

    return 0;
}
