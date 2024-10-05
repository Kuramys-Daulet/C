#include <iostream>
using namespace std;

// Ең кіші элементті табатын функция
double min(double array[], int size) {
    double minValue = array[0];  // Ең алғашқы элементті ең кіші мән ретінде қабылдаймыз

    // Массивтің барлық элементтерін тексереміз
    for (int i = 1; i < size; i++) {
        if (array[i] < minValue) {
            minValue = array[i];  // Егер элемент кіші болса, оны ең кіші мән ретінде жаңартамыз
        }
    }
    
    return minValue;  // Ең кіші мәнді қайтарамыз
}

int main() {
    const int SIZE = 10;
    double numbers[SIZE];

    // Пайдаланушыдан сандарды енгізуді сұраймыз
    cout << "Он сан енгізіңіз: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    // Ең кіші элементті табатын функцияны шақырамыз
    double smallest = min(numbers, SIZE);
    
    // Нәтижені шығару
    cout << "Ең кіші сан: " << smallest << endl;

    return 0;
}
