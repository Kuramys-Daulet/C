#include <iostream>
using namespace std;

int main() {
    int number;
    int largest;
    int smallest;

    // Алғашқы санды енгізу және оны ең үлкен әрі ең кіші мәндерге тағайындау
    cout << "Сан енгізіңіз: ";
    cin >> number;
    largest = number;
    smallest = number;

    // Тағы 5 санды енгізу
    for (int i = 1; i < 6; i++) {
        cout << "Сан енгізіңіз: ";
        cin >> number;

        // Енгізілген санды ең үлкен мәнмен салыстыру
        if (number > largest) {
            largest = number;
        }

        // Енгізілген санды ең кіші мәнмен салыстыру
        if (number < smallest) {
            smallest = number;
        }
    }

    // Нәтижені шығару
    cout << "Ең үлкен сан: " << largest << endl;
    cout << "Ең кіші сан: " << smallest << endl;

    return 0;
}
