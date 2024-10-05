#include <iostream>
using namespace std;

const int SIZE = 3;

// Массивтердің бірдей екенін тексеретін функция
bool equals(const int m1[][SIZE], const int m2[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (m1[i][j] != m2[i][j]) {
                return false;  // Егер бір элемент бірдей болмаса, жалған қайтарамыз
            }
        }
    }
    return true;  // Егер барлық элементтер бірдей болса, шын қайтарамыз
}

int main() {
    int m1[SIZE][SIZE], m2[SIZE][SIZE];

    // Бірінші массивті енгізу
    cout << "Бірінші 3x3 массивтің элементтерін енгізіңіз:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> m1[i][j];
        }
    }

    // Екінші массивті енгізу
    cout << "Екінші 3x3 массивтің элементтерін енгізіңіз:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> m2[i][j];
        }
    }

    // Массивтерді салыстырып, нәтижені көрсету
    if (equals(m1, m2)) {
        cout << "Массивтер бірдей." << endl;
    } else {
        cout << "Массивтер бірдей емес." << endl;
    }

    return 0;
}
