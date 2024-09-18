#include <iostream>
using namespace std;

int main(){
    int speed;
    cout << "Enter the speed, please: ";
    cin >> speed;
    if(speed <= 20)
    {
        cout << "too slow";

    }
    else if(speed >= 80){
        cout << "too fast";
    }
    else
    {
        cout << "just right";
    }
    return 0;
}