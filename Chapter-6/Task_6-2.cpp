#include <iostream>
using namespace std;

// Цифрлардың орташа мәнін есептейтін функция
double averageDigits(long n) {
    // Теріс сандарды оңға айналдырамыз (2.7 бөлім, б. 59)
    if (n < 0) {
        n = -n;
    }
    
    int sum = 0;
    int count = 0;
    
    // n = 0 жағдайын қарастыру (5-тарау, циклдар, б. 175)
    if (n == 0) {
        return 0.0;
    }

    // Цикл арқылы барлық цифрларды шығарып аламыз (5-тарау, б. 175)
    while (n > 0) {
        int digit = n % 10;  // Соңғы цифрды шығару (2.9 бөлім, б. 65)
        sum += digit;        // Цифрларды қосындыға қосу
        n /= 10;             // Соңғы цифрды жою
        count++;             // Цифрлардың санын көбейту
    }
    
    return static_cast<double>(sum) / count;  // Орташа мәнді есептеу (2.9 бөлім, б. 65 )
}

// Бағдарлама тестілеу үшін
int main() {
    long n;
    cout << "Бүтін сан енгізіңіз: ";
    cin >> n;
    
    // Функцияны шақыру және нәтижені шығару (6-тарау, б. 227)
    double result = averageDigits(n);
    cout << "Цифрлардың орташа мәні: " << result << endl;
    
    return 0;
}
