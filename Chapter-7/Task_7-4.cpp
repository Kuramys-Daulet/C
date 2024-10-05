#include <iostream>
using namespace std;

int main() {
    char ch;
    int vowelCount = 0;     // Дауысты әріптерді санау
    int consonantCount = 0; // Дауыссыз әріптерді санау

    cout << "Әріптерді енгізіңіз (нөлді енгізу арқылы тоқтатыңыз): " << endl;

    // Цикл мәліметтерді енгізіп, әріптерді тексеру үшін
    while (true) {
        cin >> ch;

        // Егер енгізілген символ '0' болса, циклді тоқтату
        if (ch == '0') {
            break;
        }

        // Егер әріп болса, дауысты немесе дауыссыз екенін тексереміз
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Дауысты әріптерді тексеру
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    // Нәтижені шығару
    cout << "Дауысты әріптер саны: " << vowelCount << endl;
    cout << "Дауыссыз әріптер саны: " << consonantCount << endl;

    return 0;
}
