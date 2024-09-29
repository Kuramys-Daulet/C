#include <iostream>
using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    // Display the ASCII code of the character
    int asciiCode = static_cast<int>(character);
    cout << "The ASCII code for the character is " << asciiCode << endl;

    return 0;
}
