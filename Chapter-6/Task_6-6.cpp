#include <iostream>
using namespace std;

// Үлгіні көрсететін функция
void displayPattern(int n) {
    // Сыртқы цикл - әрбір жол үшін
    for (int i = n; i >= 1; i--) {
        // Ішкі цикл - әр жолдағы жұлдызшаларды шығару
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Әрбір жолдан кейін жаңа жолға көшу
        cout << endl;
    }
}

// Бағдарламаны тестілеу
int main() {
    int n;
    cout << "Бір сан енгізіңіз: ";
    cin >> n;

    // Үлгіні көрсету функциясын шақыру
    displayPattern(n);
    
    return 0;
}
