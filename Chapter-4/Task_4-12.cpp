#include <iostream>   
#include <cctype>     // For tolower() function
using namespace std;

int main() {
    // 1) Variable to hold the letter grade
    char grade; 
    
    // 2) Prompt the user to enter a letter grade
    cout << "Enter a letter grade: ";
    cin >> grade;

    // 3) Convert the letter to lowercase to simplify comparisons
    char gradeLow;
    gradeLow = tolower(grade);

    // 4) Use conditional statements to determine the numeric value
    int numericValue;
    if (gradeLow == 'a') {
        numericValue = 4;
    }
    else if (gradeLow == 'b') {
        numericValue = 3;
    }
    else if (gradeLow == 'c') {
        numericValue = 2;
    }
    else if (gradeLow == 'd') {
        numericValue = 1;
    }
    else if (gradeLow == 'f') {
        numericValue = 0;
    }
    else {
        // If the user enters an invalid grade
        cout << grade << " Invalid grade entered." << endl;
        return 1;  // Exit the program with an error code
    }

    // Output the numeric value
    cout << "The numeric value for grade " << grade << " is " << numericValue << endl;

    return 0;
}
