#include <iostream>
#include <algorithm> // sort функциясы үшін
using namespace std;

const int SIZE = 3;

// Массив элементтерін бірдей екендігін тексеретін функция
bool equals(const int m1[][SIZE], const int m2[][SIZE]) {
    int arr1[SIZE * SIZE], arr2[SIZE * SIZE];
    int index = 0;

    // Бірінші массивтің барлық элементтерін бір өлшемді массивке көшіру
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr1[index] = m1[i][j];
            arr2[index] = m2[i][j];
            index++;
        }
    }

    // Екі массивті де сұрыптаймыз
    sort(arr1, arr1 + SIZE * SIZE);
    sort(arr2, arr2 + SIZE * SIZE);

    // Екі массивтің сұрыпталған элементтерін салыстыру
    for (int i = 0; i < SIZE * SIZE; i++) {
        if (arr1[i] != arr2[i]) {
            return false; // Егер элементтер сәйкес келмесе, жалған қайтарамыз
        }
    }

    return true; // Егер барлық элементтер сәйкес келсе, шын қайтарамыз
}

int main() {
    int m1[SIZE][SIZE], m2[SIZE][SIZE];

    // Бірінші массивті енгізу
    cout << "m1 массивінің элементтерін енгізіңіз (3x3): " << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> m1[i][j];
        }
    }

    // Екінші массивті енгізу
    cout << "m2 массивінің элементтерін енгізіңіз (3x3): " << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> m2[i][j];
        }
    }

    // Массивтерді салыстырып, нәтижені көрсету
    if (equals(m1, m2)) {
        cout << "Екі массив бірдей." << endl;
    } else {
        cout << "Екі массив бірдей емес." << endl;
    }

    return 0;
}
