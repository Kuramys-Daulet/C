#include <iostream>
using namespace std;

// Жұп цифрларды көрсететін функция
void displayEven(int number) {
    // Теріс сандарды оң сандарға айналдырамыз (2.7 бөлім, б. 59)
    if (number < 0) {
        number = -number;
    }

    bool hasEven = false;

    cout << "Жұп цифрлар: ";
    
    // Сан 0 емес болғанша цикл жалғасады (5-тарау, циклдар, б. 175)
    while (number > 0) {
        int digit = number % 10;  // Соңғы цифрды шығару (2.9 бөлім, б. 65)
        
        // Егер цифр жұп болса, оны көрсетеміз (Операторлар, б. 65)
        if (digit % 2 == 0) {
            cout << digit << " ";
            hasEven = true;
        }
        
        number /= 10;  // Соңғы цифрды жою
    }

    if (!hasEven) {
        cout << "жоқ.";
    }
    cout << endl;
}

// Бағдарламаны тестілеу үшін
int main() {
    int number;
    cout << "Бүтін сан енгізіңіз: ";
    cin >> number;

    // Жұп цифрларды көрсететін функцияны шақырамыз (6-тарау, б. 227)
    displayEven(number);
    
    return 0;
}
