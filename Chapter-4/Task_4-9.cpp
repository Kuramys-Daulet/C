#include <iostream>  
using namespace std;

int main() {
    // 1) Variable to hold the character
    char character;

    //  2) User to enter a character
    cout << "Enter a character: "; 
    cin >> character;

    // 3) Convert the character to its ASCII code using static_cast
    int asciiCode = static_cast<int>(character);

    // 4) Display the ASCII code
    cout << "The ASCII code for the character is " << asciiCode << endl;

    return 0;
}
